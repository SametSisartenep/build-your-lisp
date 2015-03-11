#include <stdio.h>
#include <stdlib.h>

#include <editline.h>

int main ( int argc, char *argv[] ) {

  char *input;

  puts("Bit REPL - Version 0.0.2");
  puts("Press Ctrl-C to Exit\n");

  while (1) {
    input = readline("bit-repl> ");

    add_history(input);

    printf("STDOUT: %s\n", input);
  }

  free(input);

  return 0;
}
