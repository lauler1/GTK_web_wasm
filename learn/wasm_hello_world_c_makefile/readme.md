# Welcome to wasm_hello_world_c_makefile

Back to [home](../readme.md)

This is the first example of wasm using C language


It needs [Emscripten SDK (emsdk)](../readme.md#Installing-the-C-Emscripten-SDK)

After emsdk is installed, in order to use it, activate PATH and other environment variables in the current terminal:

```bash
source ../../../emsdk/emsdk_env.sh
```



Create a file `hello.c`:

```makefile

IDIR =./include
CC=emcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =./lib


singlehello.js: hellomake.o hellofunc.o
	$(CC) $^ -o $@

hellomake.o: src/hellomake.c
	$(CC) -c $^ -o $@ $(CFLAGS)

hellofunc.o: src/hellofunc.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

```

To compile:

```bash
make

# or
emmake make
```
To run:

```bash
node singlehello.js
```

To run direct the WASM:

```bash
# If wasm-run is not yet installed
npm install wasm-run -g

# Execute the WASM

```
