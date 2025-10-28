#!/bin/bash
echo "=== C++ Learning Project ==="
echo ""
echo "Compiling hallo.cc..."
clang++ -o hallo hallo.cc
echo "Running hallo (with test input 'TestUser'):"
echo "TestUser" | ./hallo
echo ""
echo "Compiling summieren.cc..."
clang++ -o summieren summieren.cc
echo "Running summieren (processing daten.txt)..."
./summieren
echo "Generated datensumme.txt with $(wc -l < datensumme.txt) lines"
echo ""
echo "First 10 sums from datensumme.txt:"
head -10 datensumme.txt
echo ""
echo "Compiling eingabe_ausgabe.cc (Exercise 2)..."
clang++ -o eingabe_ausgabe eingabe_ausgabe.cc
echo "Running eingabe_ausgabe (with test input '123'):"
echo "123" | ./eingabe_ausgabe
echo ""
echo "Contents of ausgabe.txt:"
cat ausgabe.txt
echo ""
echo "=== All programs executed successfully ==="
echo ""
echo "To run programs interactively:"
echo "  hallo: clang++ -o hallo hallo.cc && ./hallo"
echo "  eingabe_ausgabe: clang++ -o eingabe_ausgabe eingabe_ausgabe.cc && ./eingabe_ausgabe"
