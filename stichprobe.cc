#include <iostream>
#include <fstream>
#include <vector>
#include <cstddef> // for size_t

int main() {
    std::ifstream fin("datensumme.txt");
    if (!fin) return 0;

    std::vector<double> a;
    double x;
    while (fin >> x) a.push_back(x);
    fin.close();
    if (a.empty()) return 0;

    const int N = static_cast<int>(a.size());

    double sum = 0.0;
    for (std::size_t i = 0; i < a.size(); ++i)
        sum += a[i];
    const double mean = sum / N;

    double ssd = 0.0;
    for (std::size_t i = 0; i < a.size(); ++i) {
        double d = a[i] - mean;
        ssd += d * d;
    }
    const double variance = ssd / N;  // 1/N population variance

    // 👇 Output only the variance (no labels, no mean)
    std::cout << variance << std::endl;
    return 0;
}







