#!/bin/bash
echo "=== C++ Learning Project ==="
echo ""
echo "Compiling hallo.cc..."
clang++ -o hallo hallo.cc
echo "Running hallo:"
./hallo
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
echo "=== All programs executed successfully ==="
