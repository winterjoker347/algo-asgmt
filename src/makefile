# Variables
CC = gcc
CFLAGS = -c
SRC = iter.c recur.c tests/test_print_aliquots.c
OBJ = $(SRC:.c=.o)
EXEC = test

# Build target
build: $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

# Run target
run: $(EXEC)
	./$(EXEC)

# Clean target
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: build run clean
