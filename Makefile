# Compiler and flags
CXX = g++
CXXFLAGS = `pkg-config --cflags opencv4`
LDFLAGS = `pkg-config --libs opencv4`

# Target executable
TARGET = main

# Source files
SRCS = main.cpp
ENCODE = encode.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) $(ENCODE) $(LDFLAGS) -o $(TARGET)

# Clean target
clear:
	rm -rf $(TARGET)
