#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

// Fake readline function
char* readline ( char *prompt ) {
  fputs(prompt, stdout);
  fgets(buffer, sizeof(buffer), stdin);

  char *cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';

  return cpy;
}

// Fake add_history function
void add_history ( char *unused ) {}

#else
#include <readline/readline.h>
#include <readline/history.h>
#endif

int main ( int argc, char *argv[] ) {
  char *input;

  puts("Bit REPL - Version 0.0.3");
  puts("Press Ctrl-c to Exit\n");

  while (1) {
    input = readline("bit-repl> ");
    add_history(input);

    printf("STDOUT: %s\n", input);
  }

  free(input);
  return 0;
}
