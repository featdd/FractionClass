CC=g++
CFLAGS=-std=c++11
prefix=/usr/local

all:
	$(CC) $(CFLAGS) Fraction.cpp main.cpp -o build/fraction

install:
	install -m 0755 build/fraction $(prefix)/bin
