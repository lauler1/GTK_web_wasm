
IDIR =./include
CC=emcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =./lib


singlehello.js: hellofunc.wasm src/hellomake.c
	$(CC) $^ -s MAIN_MODULE=1 -o $@ $(CFLAGS)

hellofunc.wasm: src/hellofunc.c
	$(CC) $< -s SIDE_MODULE=1 -o $@ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o *.o *~ core $(INCDIR)/*~
	rm -f *.wasm *.js a.out*
