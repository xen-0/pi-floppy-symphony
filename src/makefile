CC=g++-4.7
CFLAGS=-g -I../include -std=c++11 -O1
IDIR = ../include
ODIR = ../obj
BDIR = ../bin
LIBS = -lm -lwiringPi

_DEPS = FloppyPlayer.h Midi.h Floppy.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = FloppyPlayer.o Main.o Midi.o Floppy.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

symph: $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
