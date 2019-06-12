CC=g++
CFLAGS=

SRCDIR=src
BUILDDIR=build
BINDIR=../bin

BIN=BuilderPattern
SRC=$(shell find . -name '*.cpp')
TMP=$(subst $(SRCDIR),$(BUILDDIR), $(SRC))
OBJ=$(patsubst %.cpp,%.o,$(TMP))

all: $(BIN)
	@echo "$(BIN) Compiled"

$(BIN): $(OBJ)
	@echo "Compiling $(BIN)"
	@mkdir -p $(BINDIR)
	@$(CC) -o $(BINDIR)/$@ $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp 
	@mkdir -p $(BUILDDIR)
	@$(CC) $(BUILDDIR)/$@ -c  $< $(CFLAGS)

.PHONY: clean
clean:
	@rm -rf ../bin build
