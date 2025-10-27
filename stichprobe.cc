#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const int length = 234;
  float number, sum = 0, Nvariance = 0;

  {
    ifstream fin("datensumme.txt");
    for (int i = 0; i < length; i++) {
      fin >> number;
      sum += number;
    }
    fin.close();
  }
  float mean = sum / length;
  cout << mean << endl;

  {
    ifstream fin("datensumme.txt");
    for (int i = 0; i < length; i++) {
      fin >> number;
      Nvariance += (number - mean) * (number - mean);
    }
    fin.close();
  }
  float variance = Nvariance / length;
  cout << variance << endl;
  cout << sqrt(variance) << endl;
}