CC=g++

SRCDIR=src
BUILDDIR=obj
BINDIR=bin

all: build

build:
	$(CC) -g -c $(SRCDIR)/node.cpp -o $(BUILDDIR)/node.o
	$(CC) -g -c $(SRCDIR)/cursor.cpp -o $(BUILDDIR)/cursor.o
	$(CC) -g -c $(SRCDIR)/doublyLinkedList.cpp -o $(BUILDDIR)/doublyLinkedList.o
	$(CC) -g -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
	$(CC) -g $(BUILDDIR)/main.o $(BUILDDIR)/node.o $(BUILDDIR)/cursor.o $(BUILDDIR)/doublyLinkedList.o -o $(BINDIR)/main

clean:
	rm $(BUILDDIR)/*.o $(BINDIR)/*

