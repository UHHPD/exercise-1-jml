#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("daten.txt");
    std::ofstream fout("datensumme_jw.txt");

    int zahl1, zahl2;

    for(int i = 0; i < 234; i++) {
        fin >> zahl1 >> zahl2;
        int summe = zahl1 + zahl2;
        fout << summe << std::endl;
    }

    fin.close();
    fout.close();
    return 0;
}