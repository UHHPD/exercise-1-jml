#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef>   // for size_t

int main() {
    // Read all numbers from datensumme.txt
    std::ifstream fin("datensumme.txt");
    if (!fin) {
        std::cerr << "Error: cannot open datensumme.txt" << std::endl;
        return 1;
    }

    std::vector<double> a;
    double x;
    while (fin >> x) a.push_back(x);
    fin.close();

    if (a.empty()) {
        std::cerr << "Error: no numbers read" << std::endl;
        return 1;
    }

    // Block settings
    const int B = 9;                                  // block size
    const int blocks = static_cast<int>(a.size()) / B; // expected 234/9 = 26
    if (blocks == 0) {
        std::cerr << "Error: not enough data for one block" << std::endl;
        return 1;
    }

    // Open output files
    std::ofstream mout("mittelwerte.txt");
    if (!mout) {
        std::cerr << "Error: cannot open mittelwerte.txt for writing" << std::endl;
        return 1;
    }
    std::ofstream vout("varianzen.txt");
    if (!vout) {
        std::cerr << "Error: cannot open varianzen.txt for writing" << std::endl;
        return 1;
    }

    // For each block of 9 numbers, compute mean and variance (1/N)
    for (int b = 0; b < blocks; ++b) {
        const int start = b * B;

        // mean
        double sum = 0.0;
        for (int i = 0; i < B; ++i) sum += a[start + i];
        const double mean = sum / B;

        // variance with factor 1/N (population variance)
        double sum_sq_diff = 0.0;
        for (int i = 0; i < B; ++i) {
            const double d = a[start + i] - mean;
            sum_sq_diff += d * d;
        }
        const double var = sum_sq_diff / B;

        // write one value per line
        mout << mean << std::endl;
        vout << var  << std::endl;
    }

    mout.close();
    vout.close();

    // ---- Compute mean of the 26 means and variances ----
    std::ifstream fin_mean("mittelwerte.txt");
    double sum_mean = 0.0;
    int count1 = 0;
    while (fin_mean >> x) {   // reuse x from earlier
        sum_mean += x;
        count1++;
    }
    fin_mean.close();

    std::ifstream fin_var("varianzen.txt");
    double sum_var = 0.0;
    int count2 = 0;
    while (fin_var >> x) {
        sum_var += x;
        count2++;
    }
    fin_var.close();

    double mean_of_means = (count1 > 0) ? (sum_mean / count1) : 0.0;
    double mean_of_vars  = (count2 > 0) ? (sum_var / count2)  : 0.0;

    std::cout << "Mean of 26 means = " << mean_of_means << std::endl;
    std::cout << "Mean of 26 variances = " << mean_of_vars << std::endl;

    return 0;
}






