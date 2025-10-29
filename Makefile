CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Default target
all: info

# Show available exercises
info:
	@echo "=== C++ Course Exercises ==="
	@echo ""
	@echo "Available exercises:"
	@echo "  make hallo       - Build Exercise 1.1"
	@echo "  make summieren   - Build Exercise 1.2"
	@echo "  make stichprobe  - Build Exercise 2.1"
	@echo "  make stichprobe2 - Build Exercise 2.2"
	@echo "  make clean       - Remove compiled files"
	@echo ""
	@echo "Run individual programs with: ./hallo, ./summieren, etc."

# Exercise 1.1
hallo: hallo.cc
	$(CXX) $(CXXFLAGS) hallo.cc -o hallo
	@echo "Built hallo successfully!"

# Exercise 1.2
summieren: summieren.cc
	$(CXX) $(CXXFLAGS) summieren.cc -o summieren
	@echo "Built summieren successfully!"

# Exercise 2.1
stichprobe: stichprobe.cc
	$(CXX) $(CXXFLAGS) stichprobe.cc -o stichprobe
	@echo "Built stichprobe successfully!"

# Exercise 2.2
stichprobe2: stichprobe2.cc
	$(CXX) $(CXXFLAGS) stichprobe2.cc -o stichprobe2
	@echo "Built stichprobe2 successfully!"

# Clean compiled files
clean:
	rm -f hallo summieren stichprobe stichprobe2 *.o datensumme.txt mittelwerte.txt varianzen.txt
	@echo "Cleaned all compiled files and output files"

.PHONY: all info clean
