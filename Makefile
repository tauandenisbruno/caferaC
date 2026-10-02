PROJECT = CaferaC
BIN_DIR = bin
SRC_DIR = src
INC_DIR = include
OBJ_DIR = $(BIN_DIR)/obj

TARGET = $(BIN_DIR)/$(PROJECT)

CC = gcc
CFLAGS = -Wall -Wextra -ggdb -O0 -std=c11 -I$(INC_DIR)

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(BIN_DIR)

run: all
	./$(TARGET)

.PHONY: all clean run
