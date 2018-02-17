CC = gcc
SRC_DIR = src
TESTS_DIR = test
FILES = \
		$(SEATEST_DIR)/seatest.c \
		$(TESTS_DIR)/dsalg.c \
		$(TESTS_DIR)/lib/algorithms/math.c \
		$(SRC_DIR)/lib/algorithms/math.c
BIN_DIR = bin
OUT_EXE = $(BIN_DIR)/test

build: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) -I $(SEATEST_DIR)

clean:
	rm -fv $(OUT_EXE)

rebuild: clean build

test: build
	@echo
	$(OUT_EXE)
