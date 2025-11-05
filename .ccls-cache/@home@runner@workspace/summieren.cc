#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream fout("datensumme.txt");
  ifstream fin("daten.txt");
  int first, second;
  for (int i = 0; i < 234; i++) {
    fin >> first >> second;
    // cout << first << "\t" << second << "\n";
    fout << first + second << "\n";
  }
  fin.close();
  fout.close();
}