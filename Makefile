CC=clang
CFLAGS= -std=c11 -leditline
.PHONY=clean

v1: bit-repl.c
	$(CC) $(CFLAGS) -o bit-repl bit-repl.c

v2: bit-repl2.c
	$(CC) $(CFLAGS) -o bit-repl bit-repl2.c

v3: bit-repl3.c
	$(CC) $(CFLAGS) -o bit-repl bit-repl3.c

clean:
	rm -rfv ./bit-repl
