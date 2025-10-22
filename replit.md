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
