CC=g++

# TODO: Reescrever Makefile para incluir as libs em compile-time

SRCDIR=src
BUILDDIR=obj

all: $(BUILDDIR)/stack.o $(BUILDDIR)/linearQueue.o $(BUILDDIR)/circularQueue.o $(BUILDDIR)/linkedList.o $(BUILDDIR)/main.o

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -o $@ $^

clean:
	rm $(BUILDDIR)/*.o

