# Compiler and flags
CXX = g++
CXXFLAGS = `pkg-config --cflags opencv4`
LDFLAGS = `pkg-config --libs opencv4`

# Target executable
TARGET = main

# Source files
SRCS = main.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) $(LDFLAGS) -o $(TARGET)

# Clean target
clear:
	rm -rf $(TARGET)
