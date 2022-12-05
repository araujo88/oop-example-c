CC=gcc
CC_FLAGS=-g -Wall

BIN_FILE=oop_example

SRC_DIR=src
HDR_DIR=include
OBJ_DIR=obj

# source and object files
SRC_FILES=$(wildcard $(SRC_DIR)/*.c)
OBJ_FILES=$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

BIN_FILE=oop_example

all: $(OBJ_DIR) $(BIN_FILE)

$(BIN_FILE): $(OBJ_FILES)
	$(CC) $(CC_FLAGS) $^ -I$(HDR_DIR) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CC_FLAGS) -c $^ -I$(HDR_DIR) -o $@

$(OBJ_DIR):
	mkdir $@

clean:
	rm -rf $(BIN_FILE) $(OBJ_DIR)