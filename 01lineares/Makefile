CC=g++

SRCDIR=src
BUILDDIR=obj
BINDIR=bin

all: build

build:
	$(CC) -g -c $(SRCDIR)/linkedList.cpp -o $(BUILDDIR)/linkedList.o
	$(CC) -g -c $(SRCDIR)/queue.cpp -o $(BUILDDIR)/queue.o
	$(CC) -g -c $(SRCDIR)/stack.cpp -o $(BUILDDIR)/stack.o
	$(CC) -g -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
	$(CC) -g $(BUILDDIR)/main.o $(BUILDDIR)/linkedList.o $(BUILDDIR)/queue.o $(BUILDDIR)/stack.o -o $(BINDIR)/main

clean:
	rm $(BUILDDIR)/*.o $(BINDIR)/*

# all: $(BUILDDIR)/stack.o $(BUILDDIR)/linearQueue.o $(BUILDDIR)/circularQueue.o $(BUILDDIR)/linkedList.o $(BUILDDIR)/main.o

# $(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
# 	$(CC) -o $@ $^

