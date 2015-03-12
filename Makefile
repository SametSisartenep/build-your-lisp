CC=clang
CFLAGS= -std=c11 -leditline
OUTPUT= -o bit-repl
.PHONY=clean

all: v4

v1: bit-repl.c
	$(CC) $(CFLAGS) $(OUTPUT) bit-repl.c

v2: bit-repl2.c
	$(CC) $(CFLAGS) $(OUTPUT) bit-repl2.c

v3: bit-repl3.c
	$(CC) $(CFLAGS) $(OUTPUT) bit-repl3.c

v4: bit-repl4.c
	$(CC) $(CFLAGS) $(OUTPUT) bit-repl4.c

clean:
	rm -rfv ./bit-repl
