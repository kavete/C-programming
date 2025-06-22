
#include <stdio.h>

int age =4;
int month = 6;
void loops() {
    switch(month) {
        case 1:
            
            printf("Njaanuary \n");
            break;
        case 2:

            printf("Shorty \n");
            break;
        case 12: 
            printf("Make Merry and Party!\n");
        default:
            printf("Nobody cares\n");
            break;
    }
    
    while (age > 3 && age < 70) {
        printf("Be careful now!!\n");
        age++;

    }

    do {
        printf("Macarena!\n");
    } while(age > 18 && age < 25);

    for (int i=0; i<=9; i++) {
        printf("i= %d\n", i);
    }
    int a, b;

    for (a=1; a <5; a++) {
        for(b=1; b<5; b++) {
            printf("%d x %d = %d\n", a, b, a*b);
        }
    }
}
