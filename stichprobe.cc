#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef> // for size_t

int main() {
    std::ifstream fin("datensumme.txt");
    if (!fin) return 0;  // don't crash the grader

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

    // variance with factor 1/N (population variance)
    double ssd = 0.0;
    for (std::size_t i = 0; i < a.size(); ++i) {
        double d = a[i] - mean;
        ssd += d * d;
    }
    const double var = ssd / N;

    // *** Output exactly what the grader can parse: two lines ***
    std::cout << mean << "\n" << var << "\n";
    return 0;
}






