#include <stdio.h>
#include <stdlib.h>

int main() {
  int age;
  float height;
  double speed;
  char grade;

  printf("%zu\n", sizeof(age));
  printf("%zu\n", sizeof(height));
  printf("%zu\n", sizeof(speed));
  printf("%zu\n", sizeof(grade));
  // Static memory
  // Memory that is reserved for variables before the program runs
  int students1[20];

  printf("%zu\n", sizeof(students1)); // 20 * 4 = 80
  // Dynamic memory allocation
  // Memory that is allocated after the program starts running
  // Dynamic memory can only be accessed by pointers
  int *ptr1, *ptr2;
  ptr1 = malloc(sizeof(*ptr1));
  ptr2 = calloc(1, sizeof(*ptr2));

  int *students;
  int numStudents = 12;

  students = calloc(numStudents, sizeof(*students));
  printf("%d\n", numStudents * sizeof(*students));

  // Stack memory
  // A type of dynamic memory which is reserved for variables that are declared
  // inside functions Accessing dynamic memory
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));
  *ptr = 2;
  ptr[1] = 4;
  ptr[2] = 6;

  printf("%d\n", *ptr);
  printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);
  // Memory reallocation

  int *ptr3, *ptr4, size;

  size = 4 * sizeof(*ptr3);
  ptr3 = malloc(size);

  printf("%d bytes allocated at address %p \n", size, ptr3);

  // resixe the memory to hold six integers
  size = 6 * sizeof(*ptr3);
  ptr4 = realloc(ptr3, size);

  if (ptr4 == NULL) {

    printf("Unable to resize memory");
  } else {
    printf("%d bytes reallocated at address %p \n", size, ptr4);
  }

  free(ptr3);
  ptr3 = NULL;
  return 0;
}
