#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const int length = 234, chuck = 9;
  float sum = 0;

  ifstream fin("datensumme.txt"), another_fin("datensumme.txt");
  ofstream fout("mittelwerte.txt"), another_fout("varianzen.txt");

  for (int i = 0; i < length; i++) {
    float local_mean, number, another_number, chuck_variance = 0;
    fin >> number;
    sum += number;
    if ((i + 1) % chuck == 0) {
      local_mean = sum / chuck;
      fout << local_mean << endl;
      sum = 0;
      for (int j = 0; j < chuck; j++) {
        another_fin >> another_number;
        chuck_variance +=
            (another_number - local_mean) * (another_number - local_mean);
      }
      another_fout << chuck_variance / chuck << endl;
    }
  }
  fin.close();
  fout.close();
  another_fin.close();
  another_fout.close();
}