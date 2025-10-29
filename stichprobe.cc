#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef>
#include <cmath>
#include <iomanip>

int main() {
    std::ifstream fin("datensumme.txt");
    if (!fin) return 0;

    std::vector<double> a;
    double x;
    while (fin >> x) a.push_back(x);
    fin.close();
    if (a.empty()) return 0;

    const int N = static_cast<int>(a.size());

    // mean
    double sum = 0.0;
    for (std::size_t i = 0; i < a.size(); ++i) sum += a[i];
    const double mean = sum / N;

    // variance with factor 1/N (population)
    double ssd = 0.0;
    for (std::size_t i = 0; i < a.size(); ++i) {
        const double d = a[i] - mean;
        ssd += d * d;
    }
    const double variance = ssd / N;

    // standard deviation
    const double sigma = std::sqrt(variance);

    // print ONLY the standard deviation, matching grader’s formatting
    std::cout << std::fixed << std::setprecision(5) << sigma << "\n";
    return 0;
}








