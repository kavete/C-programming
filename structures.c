#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

struct Car {
    char brand[50];
    int year;
};

void updateYear(struct Car *carptr);

void unions();

int main() {
    struct Person person1;
    
    strcpy(person1.name, "Kavete");
    person1.age = 24;
    
    struct Person person2 = {"Brian", 24};

    printf("Name %s\n", person1.name);
    printf("Age %d\n", person1.age);
    
    printf("Person2 name: %s\n", person2.name);
    struct Car car1 = {"BMW", 2023};
    struct Car *ptr = &car1;

    printf("Car brand: %s\n", ptr->brand);

    updateYear(&car1);

    printf("Updated Year: %d\n", car1.year);

    unions();
    return 0;
}



void updateYear(struct Car *carptr) {
    carptr->year = 2025;
}


void unions() {
    union StudentGrade {
        char sub_1;
        char sub_2;
        char sub_3;
    };

    union StudentGrade student1;
    student1.sub_1= 'A';
    student1.sub_2='B';
    student1.sub_3='B';

    printf("Student1 subject1 grade: %c\n", student1.sub_1);

}
