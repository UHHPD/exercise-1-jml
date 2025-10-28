#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Wie ist Ihr Name? ";
  std::cin >> name;
  std::cout << "Hallo " << name << "!" << std::endl;
}