#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const int length = 234, chuck = 9;
  float sum = 0, mean_sum = 0, chuck_variance_sum = 0,
        chuck_variance_sum_corr = 0;

  ifstream fin("datensumme.txt"), another_fin("datensumme.txt");
  ofstream fout("mittelwerte.txt"), another_fout("varianzen.txt");

  for (int i = 0; i < length; i++) {
    double local_mean, number, another_number, chuck_variance = 0;
    fin >> number;
    sum += number;
    if ((i + 1) % chuck == 0) {
      local_mean = sum / chuck;
      mean_sum += local_mean;
      fout << local_mean << endl;
      sum = 0;
      for (int j = 0; j < chuck; j++) {
        another_fin >> another_number;
        chuck_variance +=
            (another_number - local_mean) * (another_number - local_mean);
      }
      another_fout << chuck_variance / chuck << endl;
      chuck_variance_sum += chuck_variance / chuck;
      chuck_variance_sum_corr += chuck_variance / (chuck - 1);
    }
  }
  cout << mean_sum / (length / chuck) << endl;  // mean of sample mean
  cout << chuck_variance_sum / (length / chuck)
       << endl;  // mean of uncorrected variance
  cout << chuck_variance_sum_corr / (length / chuck)
       << endl;  // mean of corrcted variance, closer to 2a results

  fin.close();
  fout.close();
  another_fin.close();
  another_fout.close();
}