SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, src/%.o, $(SRC))
INC = inc/
EXE_DIR = exe

CFLAGS = -I $(INC)
EXE = $(EXE_DIR)/app.elf

# List of test source files in exesrc directory
TESTS_SRC = $(wildcard exesrc/*.c)
TESTS_OBJ = $(patsubst exesrc/%.c, exesrc/%.o, $(TESTS_SRC))
TESTS_TARGETS = $(patsubst exesrc/%.c, $(EXE_DIR)/%.elf, $(TESTS_SRC))

.SECONDARY:

all: $(EXE) $(TESTS_TARGETS)

$(EXE): $(OBJ)
	gcc $(OBJ) -o $@ -lm

src/main.o: src/main.c
	gcc -c $< $(CFLAGS) -o $@

src/%.o: src/%.c
	gcc -c $< $(CFLAGS) -o $@

$(EXE_DIR)/%.elf: exesrc/%.o $(OBJ)
	gcc $< $(filter-out src/main.o, $(OBJ)) -o $@ -lm

$(EXE_DIR)/%.o: exesrc/%.c
	gcc -c $< $(CFLAGS) -o $@

run: $(TESTS_TARGETS)
	@for test in $(TESTS_TARGETS); do \
	    ./$$test; \
	done

clean:
	rm -f $(OBJ) $(EXE) $(TESTS_OBJ) $(TESTS_TARGETS)

.PHONY: all run clean
