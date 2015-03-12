#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <editline.h>

int main ( int argc, char *argv[] ) {
  char *input;

  puts("Bit REPL - Version 0.0.4");
  puts("Press Ctrl-c to Exit\n");

  while (1) {
    input = readline("bit-repl> ");

    if (!strcmp(input, "exit") || !strcmp(input, "quit")) {
      printf("\nThanks for using Bit REPL :)\nClosing...\n");
      free(input);
      exit(1);
    }

    add_history(input);

    printf("STDOUT: %s\n", input);
  }

  free(input);
  return 0;
}
