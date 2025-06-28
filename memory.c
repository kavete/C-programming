#include <stdio.h>


void memory() {
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

}