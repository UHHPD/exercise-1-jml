#include <fstream>
#include <iostream>

int main() {
  int zahl;
  
  // Input from terminal
  std::cout << "Geben Sie eine Zahl ein: ";
  std::cin >> zahl;
  
  // Output to terminal
  std::cout << "Sie haben eingegeben: " << zahl << std::endl;
  
  // Output to file
  std::ofstream fout("ausgabe.txt");
  fout << zahl << std::endl;
  fout.close();
  std::cout << "Zahl wurde in ausgabe.txt gespeichert" << std::endl;
  
  // Input from file
  std::ifstream fin("ausgabe.txt");
  int gelesene_zahl;
  fin >> gelesene_zahl;
  fin.close();
  
  // Output to terminal
  std::cout << "Aus Datei gelesen: " << gelesene_zahl << std::endl;
  
  return 0;
}
