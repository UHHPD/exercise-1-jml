# Uebung1 - C++ Learning Project

## Overview
This is a C++ learning repository for an ABK C++ course (German: "Dies ist das Repository für die ersten Aufgaben des ABK-C++-Kurs").

## Project Structure
- `hallo.cc` - Modified to ask for user's name (terminal input) and greet them (Exercise 2)
- `summieren.cc` - Program that reads pairs of numbers from `daten.txt` and writes their sums to `datensumme.txt`
- `eingabe_ausgabe.cc` - Exercise 2: Demonstrates terminal I/O and file I/O (reads number from user, writes to file, reads from file)
- `daten.txt` - Input data file containing 234 pairs of integers
- `datensumme.txt` - Generated output file (created when running summieren)
- `ausgabe.txt` - Generated output file (created when running eingabe_ausgabe)

## Setup
This project uses C++ with the Clang compiler. Programs are compiled and run using the workflow.

## Architecture
- Language: C++
- Compiler: Clang
- Type: Console applications (no frontend)

## Recent Changes
- **2025-10-28**: Exercise 2 - Input and Output
  - Modified `hallo.cc` to include user input with `std::cin`
  - Created `eingabe_ausgabe.cc` demonstrating all I/O concepts:
    - Terminal input with `std::cin`
    - Terminal output with `std::cout`
    - File output with `std::ofstream`
    - File input with `std::ifstream`
  - Updated run.sh and .gitignore for new program
- **2025-10-28**: Initial Replit setup
  - Installed C++ Clang toolchain
  - Configured workflow to compile and run programs
  - Updated .gitignore for Replit environment
