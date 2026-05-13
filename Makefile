CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -pedantic -std=c99 -I./lib
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11 -I./lib
AR = ar
ARFLAGS = rcs

LIB_DIR = lib
LIB_SRC = $(LIB_DIR)/change_colour.c
LIB_HDR = $(LIB_DIR)/change_colour.h
LIB_OBJ = $(LIB_DIR)/change_colour.o
STATIC_LIB = $(LIB_DIR)/libchangecolour.a

TARGET_C = demo
TARGET_CXX = demo_cpp

all: $(STATIC_LIB) $(TARGET_C) $(TARGET_CXX)

# Build the static library
$(STATIC_LIB): $(LIB_OBJ)
	$(AR) $(ARFLAGS) $@ $^

# Compile the library object file
$(LIB_DIR)/%.o: $(LIB_DIR)/%.c $(LIB_HDR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build the C demo
$(TARGET_C): demo.c $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ demo.c -L$(LIB_DIR) -lchangecolour

# Build a C++ demo to demonstrate C++ compatibility
$(TARGET_CXX): demo.cpp $(STATIC_LIB)
	$(CXX) $(CXXFLAGS) -o $@ demo.cpp -L$(LIB_DIR) -lchangecolour

clean:
	rm -f $(LIB_DIR)/*.o $(STATIC_LIB) $(TARGET_C) $(TARGET_CXX)

.PHONY: all clean
