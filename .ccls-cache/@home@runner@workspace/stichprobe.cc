#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const int N = 234;
  
  // a) Read numbers and compute mean
  ifstream fin("datensumme.txt");
  double sum = 0;
  int value;
  
  for (int i = 0; i < N; i++) {
    fin >> value;
    sum += value;
  }
  fin.close();
  
  double mean = sum / N;
  cout << "Mean: " << mean << endl;
  
  // b) Read file again and compute variance
  fin.open("datensumme.txt");
  double variance_sum = 0;
  
  for (int i = 0; i < N; i++) {
    fin >> value;
    variance_sum += (value - mean) * (value - mean);
  }
  fin.close();
  
  double variance = variance_sum / N;
  cout << "Variance: " << variance << endl;
  
  // c) Compute standard deviation
  double standard_deviation = sqrt(variance);
  cout << "Standard Deviation: " << standard_deviation << endl;
  
  return 0;
}
