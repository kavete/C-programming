#include <stdio.h>
#include <string.h>

void arrays() {

    int numbers[] = {1, 2, 3, 5};
    printf("%d\n", numbers[0]);

    numbers[1] = 10;
    printf("%d\n", numbers[1]);

    for (int i=0; i < 4; i++) {
        printf("%d\n", numbers[i]);
    }

    float heights[3];

    heights[0] = 1.5;
    heights[1]=1.67;
    heights[2] = 1.78;

    int arr_length = sizeof(heights) / sizeof(heights[0]);

    printf("Length of array is: %d\n", arr_length);

    for (int i=0; i< arr_length; i++) {
        printf("%.2f\n", heights[i]);
    }

    int ages[] = {18, 23, 54, 12, 23, 15, 67};

    float average, sum =0;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (int i=0; i< length; i++) {

        sum+=ages[i];
    }

    average = sum/length;

    printf("Average: %.2f\n", average);

    int matrix[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    printf("First element, second row: %d\n", matrix[1][0]);


    int i, j;

    for (i=0; i<2; i++) {
        for(j=0; j<4; j++){
            printf("%d\n", matrix[i][j]);
        }
    }
    
}

void strings() {
    char name[] = "Kavete";
    
    printf("My name is %s\n", name);
    printf("First char: %c\n", name[0]);

    name[0] = 'k';

    printf("username: %s\n", name);

    char stupid_string[] = {'S', 't', 'u', 'p', 'i', 'd', '\0'};

    printf("%s\n", stupid_string);


    printf("Name length: %d\n", strlen(name));

 
    char first_name[20]; // This sh8t caused my memory related error. If youre going to change the array, give it more memory??
    strcpy(first_name, "Brian ");
    
    name[0] ='K';
    
    printf("%s\n", strcat(first_name, name));

    printf("%s\n", first_name);

    printf("%s\n", name);
    printf("%s\n", strcpy(first_name, name));
}