CC=g++

SRCDIR=src
BUILDDIR=obj
BINDIR=bin

all: build

build:
	$(CC) -c $(SRCDIR)/linkedList.cpp -o $(BUILDDIR)/linkedList.o
	$(CC) $(SRCDIR)/main.cpp $(BUILDDIR)/linkedList.o -o $(BINDIR)/main

clean:
	rm $(BUILDDIR)/*.o $(BINDIR)/*

# all: $(BUILDDIR)/stack.o $(BUILDDIR)/linearQueue.o $(BUILDDIR)/circularQueue.o $(BUILDDIR)/linkedList.o $(BUILDDIR)/main.o

# $(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
# 	$(CC) -o $@ $^

