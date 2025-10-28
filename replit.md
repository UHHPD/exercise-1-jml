<<<<<<< HEAD
# C++ Learning Course - Uebung1

## Overview
This is a C++ learning repository for the ABK-C++ course. It contains exercise files for students to complete.

## Project Structure
- `hallo.cc` - Exercise 1.1: Simple "Hello" program
- `summieren.cc` - Exercise 1.2: Program to sum rows from `daten.txt` and output to `datensumme.txt`
- `daten.txt` - Input data file with two columns of numbers
- `stichprobe.cc` - Exercise 2.1: Statistical sample program (to be added)
- `stichprobe2.cc` - Exercise 2.2: Advanced statistical program (to be added)

## Build System
- Language: C++
- Compiler: g++ (via clang++)
- No external dependencies required

## Expected Behavior
### Exercise 1.1 (hallo.cc)
- Compile: `g++ hallo.cc -o hallo`
- Run: `./hallo`
- Expected output: Should contain "llo" (typically "Hello" or similar)

### Exercise 1.2 (summieren.cc)
- Compile: `g++ summieren.cc -o summieren`
- Run: `./summieren`
- Expected: Reads `daten.txt`, sums each row, writes results to `datensumme.txt`

## Recent Changes
- 2025-10-22: Initial setup in Replit environment with C++ toolchain
=======
# Uebung1 - C++ Learning Project

## Overview
This is a C++ learning repository for an ABK C++ course (German: "Dies ist das Repository für die ersten Aufgaben des ABK-C++-Kurs").

## Project Structure
- `hallo.cc` - Simple "Hello World" program that prints "Hallo Welt!" to console
- `summieren.cc` - Program that reads pairs of numbers from `daten.txt` and writes their sums to `datensumme.txt`
- `daten.txt` - Input data file containing 234 pairs of integers
- `datensumme.txt` - Generated output file (created when running summieren)

## Setup
This project uses C++ with the Clang compiler. Programs are compiled and run using the workflow.

## Architecture
- Language: C++
- Compiler: Clang
- Type: Console applications (no frontend)

## Recent Changes
- **2025-10-28**: Initial Replit setup
  - Installed C++ Clang toolchain
  - Configured workflow to compile and run programs
  - Updated .gitignore for Replit environment
>>>>>>> f5e2d3c3ab1fc24bf3683ab83c8d505d068f3b20
