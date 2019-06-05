CC=javac

BIN=Singleton

BINDIR=../bin/$(BIN)

SRC=$(shell find . -name '*.java')
TMP=$(subst $(SRCDIR),$(BIN), $(SRC))

all: $(BIN)
	@echo "$(BIN) Compiled"

$(BIN): $(SRC)
	@mkdir -p $(BINDIR)
	@echo "Compiling..."
	@$(CC) -d $(BINDIR) $^
