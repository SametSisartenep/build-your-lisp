#include <stdio.h>

static char input[2048];

int main (int argc, char *argv[]) {

  puts("Bit REPL - Version 0.0.1");
  puts("Press Ctrl-c to Exit\n");

  while (1) {
    fputs("bitrepl> ", stdout);

    fgets(input, sizeof(input), stdin);

    printf("STDOUT: %s", input);
  }

  return 0;
}
