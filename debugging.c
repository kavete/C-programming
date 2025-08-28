#include <asm-generic/errno-base.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getnumber();

int main() {

  getnumber();
  FILE *f = fopen("nonexistentfile.txt", "r");

  // if (f == NULL) {

  // printf("Error: %s\n", strerror(errno));
  // return 1;
  //}

  if (f == NULL) {

    if (errno == ENOENT) {

      // printf("Error: The file was not found");
      perror("Could not open the file");
      // exit(1);
      exit(EXIT_FAILURE);
    }
  }

  fclose(f);

  return EXIT_SUCCESS;
}

void getnumber() {

  int number;

  do {
    printf("Choose a number between 1 and 10\n");
    scanf("%d", &number);

    while (getchar() != '\n')
      ;
  } while (number < 1 || number > 10);

  printf(("You chose %d \n"), number);
}
