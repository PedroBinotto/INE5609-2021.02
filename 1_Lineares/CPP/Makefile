CC=g++

SRCDIR=src
BUILDDIR=obj

all: $(BUILDDIR)/stack.o $(BUILDDIR)/linearQueue.o $(BUILDDIR)/circularQueue.o $(BUILDDIR)/linkedList.o 

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -o $@ $^

clean:
	rm $(BUILDDIR)/*.o

