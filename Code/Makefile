# Makefile for CLI Calculator

CC=gcc
CFLags = -Wall - Wextra -std=c99

TARGET = cli_calc

# Set defualt target: build program for cli_calc.c
all : $(TARGET)

$(TARGET): cli_calc.c
	$(CC) $(CFLAGS) cli_calc.c -o $(TARGET)

# clean command to clena up files
clean:
	rm -f $(TARGET)
