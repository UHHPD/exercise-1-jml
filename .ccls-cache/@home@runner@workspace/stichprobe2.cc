#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const int N = 234;
  const int group_size = 9;
  const int num_groups = N / group_size; // 26 groups
  
  ifstream fin("datensumme.txt");
  ofstream fout_mean("mittelwerte.txt");
  ofstream fout_var("varianzen.txt");
  
  // Process each group of 9 consecutive numbers
  for (int group = 0; group < num_groups; group++) {
    int values[group_size];
    
    // Read 9 numbers for this group
    for (int i = 0; i < group_size; i++) {
      fin >> values[i];
    }
    
    // Compute mean for this group
    double sum = 0;
    for (int i = 0; i < group_size; i++) {
      sum += values[i];
    }
    double mean = sum / group_size;
    
    // Compute variance for this group
    double variance_sum = 0;
    for (int i = 0; i < group_size; i++) {
      variance_sum += (values[i] - mean) * (values[i] - mean);
    }
    double variance = variance_sum / group_size;
    
    // Write results to files
    fout_mean << mean << endl;
    fout_var << variance << endl;
  }
  
  fin.close();
  fout_mean.close();
  fout_var.close();
  
  cout << "Computed " << num_groups << " means and variances" << endl;
  cout << "Results written to mittelwerte.txt and varianzen.txt" << endl;
  
  return 0;
}
