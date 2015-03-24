
# A simple makefile (Believe me - very simple...)

TARGET := c12

SRC := c12.cpp binstree.cpp

HEADERS := binstree.h

################################################################


CXX=C:\MinGW\bin\g++

CC=C:\MinGW\bin\gcc

# Used by the C/C++ Pre-Processor
#
CPPFLAGS :=

# Used by the C Compiler
#
CFLAGS := 

# Used by the C++ Compiler
#
CXXFLAGS :=

# Linker Flags
#
LDFLAGS :=

################################################################

OBJ := $(SRC:.cpp=.o)

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $< -o $@

%.o : %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(TARGET): $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ) $(LDFLAGS)

$(OBJ): $(HEADERS)

clean:
	rm -f $(TARGET) $(OBJ)
