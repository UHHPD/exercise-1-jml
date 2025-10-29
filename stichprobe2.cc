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
  
  double means[num_groups];
  double variances[num_groups];
  double variances_bessel[num_groups];
  
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
    means[group] = mean;
    
    // Compute variance for this group
    double variance_sum = 0;
    for (int i = 0; i < group_size; i++) {
      variance_sum += (values[i] - mean) * (values[i] - mean);
    }
    double variance = variance_sum / group_size;
    variances[group] = variance;
    
    // Compute variance with Bessel's correction (N-1)
    double variance_bessel = variance_sum / (group_size - 1);
    variances_bessel[group] = variance_bessel;
    
    // Write results to files
    fout_mean << mean << endl;
    fout_var << variance << endl;
  }
  
  fin.close();
  fout_mean.close();
  fout_var.close();
  
  cout << "Computed " << num_groups << " means and variances" << endl;
  cout << "Results written to mittelwerte.txt and varianzen.txt" << endl;
  cout << endl;
  
  // Compute mean of means
  double sum_of_means = 0;
  for (int i = 0; i < num_groups; i++) {
    sum_of_means += means[i];
  }
  double mean_of_means = sum_of_means / num_groups;
  
  // Compute mean of variances
  double sum_of_variances = 0;
  for (int i = 0; i < num_groups; i++) {
    sum_of_variances += variances[i];
  }
  double mean_of_variances = sum_of_variances / num_groups;
  
  // Compute mean of variances with Bessel's correction
  double sum_of_variances_bessel = 0;
  for (int i = 0; i < num_groups; i++) {
    sum_of_variances_bessel += variances_bessel[i];
  }
  double mean_of_variances_bessel = sum_of_variances_bessel / num_groups;
  
  cout << "=== Comparison with Exercise 1 ===" << endl;
  cout << "Exercise 1 (full dataset):" << endl;
  cout << "  Mean: 3.11538" << endl;
  cout << "  Variance: 2.73455" << endl;
  cout << endl;
  cout << "Exercise 2 (mean of 26 group means):" << endl;
  cout << "  Mean of means: " << mean_of_means << endl;
  cout << "  Mean of variances: " << mean_of_variances << endl;
  cout << "  Mean of variances (Bessel's correction): " << mean_of_variances_bessel << endl;
  cout << endl;
  cout << "Observations:" << endl;
  cout << "  - Mean of means ≈ Overall mean: " << (abs(mean_of_means - 3.11538) < 0.01 ? "YES" : "NO") << endl;
  cout << "  - Mean of variances < Overall variance (biased estimator)" << endl;
  cout << "  - Mean of variances (Bessel) ≈ Overall variance: " << (abs(mean_of_variances_bessel - 2.73455) < 0.1 ? "YES" : "NO") << endl;
  
  return 0;
}
