CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
TARGET = demo

all: $(TARGET)

$(TARGET): main.o change_colour.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o change_colour.o

main.o: main.c change_colour.h
	$(CC) $(CFLAGS) -c main.c

change_colour.o: change_colour.c change_colour.h
	$(CC) $(CFLAGS) -c change_colour.c

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
