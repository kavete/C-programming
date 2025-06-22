#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"
#include "loops.h"


int main() {
    printf("Hello C. I'm back!\n");
    int num1 = 5;
    int num2 = 14;
    int total = num1 + num2;
    printf("Sum: %d\n", total);
    float height = 1.7;

    char grade = 'A';
    double long_number = 3.5634234523;
    printf("My mathematical marvel! %lf\n", long_number);

    const float pi = 3.14;

    printf("I'm a big guy! %zu bytes, I am!\n", sizeof(double));

    printf("My name is Primegean and I am %.2f metres tall.\nAlso, I scored an %c in the Vim exam\n", height, grade);

    int age = 6;

    if (age > 900) {
        printf("Hello Father Abraham\n");
    } else if (age > 120) {

        printf("I didn't know vampires still existed. Pay me a visit will ya?!\n");
    } else if (age >= 18) {

        printf("How's adulting ma gai?");
    } else if (age > 0) {
        printf("Go home to your mother!\n");
    } else {
        printf("It's not funny anymore\n");
    }

    char math_grade = 'C';

    (math_grade == 'F') ? printf("Been there, done that!"): printf("Smart ass!\n");
   
    bool switched_on = true; 

    if (switched_on == 1) {
         printf("The bulb is on.\n");
    } else {
        printf("The light is off.\n");
    }
    
    loops();
    arrays();
    strings();
    
    return 0;
}