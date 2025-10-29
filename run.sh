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
echo "Compiling stichprobe.cc (Samples - Statistics)..."
clang++ -o stichprobe stichprobe.cc
echo "Running stichprobe (computing statistics from datensumme.txt):"
./stichprobe
echo ""
echo "Compiling stichprobe2.cc (Small Samples)..."
clang++ -o stichprobe2 stichprobe2.cc
echo "Running stichprobe2 (computing 26 group statistics):"
./stichprobe2
echo "First 5 means from mittelwerte.txt:"
head -5 mittelwerte.txt
echo "First 5 variances from varianzen.txt:"
head -5 varianzen.txt
echo ""
echo "=== All programs executed successfully ==="
echo ""
echo "To run programs interactively:"
echo "  hallo: clang++ -o hallo hallo.cc && ./hallo"
echo "  eingabe_ausgabe: clang++ -o eingabe_ausgabe eingabe_ausgabe.cc && ./eingabe_ausgabe"
echo "  stichprobe: clang++ -o stichprobe stichprobe.cc && ./stichprobe"
echo "  stichprobe2: clang++ -o stichprobe2 stichprobe2.cc && ./stichprobe2"
