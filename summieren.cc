#include <fstream>
#include <iostream>
using namespace std;

// Program: summieren.cc
// Purpose: Read number pairs from daten.txt and write their sums to datensumme.txt
// Development steps demonstrated below:

int main() {
  // Step 1: Understand file structure
  // daten.txt contains 234 pairs of integers (two numbers per line)
  
  // Step 2 & 3: Open file, read numbers, and loop through all pairs
  ifstream fin("daten.txt");
  int first, second;
  
  // Step 5: Open output file for writing sums
  ofstream fout("datensumme.txt");
  
  // Step 3: Loop 234 times to read all number pairs
  for (int i = 0; i < 234; i++) {
    // Step 2: Read two numbers from the file
    fin >> first >> second;
    
    // Step 3 (optional): Uncomment to print pairs to terminal for testing
    // cout << first << "\t" << second << "\n";
    
    // Step 4 & 5: Calculate sum and write to output file
    fout << first + second << "\n";
  }
  
  // Close both files at the end
  fin.close();
  fout.close();
  
  cout << "Successfully processed 234 number pairs!" << endl;
  cout << "Sums written to datensumme.txt" << endl;
  
  return 0;
}