CC = gcc
CFLAGS = -Wall -Werror

all: conversion_test tablas_conversion

conversion_test: Conversion.o ConversionTest.o
	$(CC) $(CFLAGS) -o conversion_test Conversion.o ConversionTest.o

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.conversion_test

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

tablas_conversion: TablasDeConversion.c Conversion.o
	$(CC) $(CFLAGS) -o tablas_conversion TablasDeConversion.c Conversion.o

clean:
	rm -f conversion_test tablas_conversion *.o