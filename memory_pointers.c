#include <stdio.h>


int main() {
    // User input
    char name[20];
    int age;
    printf("Enter your first name\n");
    scanf("%s", name);
    printf("Enter your age.\n");
    scanf("%d", &age);
    printf("Hey %s you are  %d years old.\n",name, age);


    int num;
    char some_character;
    printf("Type a number and a character\n");

    scanf(" %d %c", &num, &some_character);
    getchar();
    printf("The number is %d and the character is %c\n", num, some_character);

    char full_name[30];

    printf("Enter your full name: ");
    // scanf("%s", full_name);
    
    fgets(full_name, sizeof(full_name), stdin);
    printf("Hello %s\n", full_name);
    int someNumber = 23;

    int* someNumberPtr = &someNumber;
    //int *someNumberPtr = &someNumberPtr;

    printf("The number: %d\n", someNumber);
    printf("The address: %p\n", &someNumber); 
    
    printf("Address from pointer: %p\n", someNumberPtr);

    printf("Value from pointer: %d\n", *someNumberPtr);
    
    
    int arrayOfNumbers[] = {33, 45, 18, 64, 11};
    
    int i;
    
    int array_length = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    for (i=0; i < array_length; i++) {
        printf("%p\n", &arrayOfNumbers[i]);
    }
    
    // address of the first array == address of the array
    printf("%p\n", arrayOfNumbers);
    printf("%p\n", &arrayOfNumbers[0]);

    //Access first element
    printf("%d\n", *arrayOfNumbers);

    //Second element
    printf("%d\n", *(arrayOfNumbers+1));
    
    int *array_pointer = arrayOfNumbers;
    for (i=0; i < array_length; i++) {
        printf("%d\n", *(array_pointer +i));
    }

    *(arrayOfNumbers+1) = 100;

    printf("%d\n", arrayOfNumbers[1]);

    return 0;

}
