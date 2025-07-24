#include <stdio.h>
#include <math.h>

void sayHello();

void sayHelloName(char name[]);

void calculateSum(int x, int y);

int getSum(int x, int y);

int recursiveSum(int k);

void randomMathFuncs();

int main() {
    sayHello();
    sayHelloName("Brian");
    sayHelloName("John");
    calculateSum(45, 34);
    printf("Returned sum %d\n", getSum(75, 25));
    
    int recursedSum = recursiveSum(10);
    printf("Sum from recursion: %d\n", recursedSum);
    randomMathFuncs();
    return 0;
}

void sayHello() {
    printf("Hello World\n");
}
void sayHelloName(char name[]) {

    printf("Hello %s\n", name);
}
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("%d + %d = %d\n", x, y, sum);
}

int getSum(int x, int y) {
    return x +y;
}

int recursiveSum(int k) {
    if (k > 0) {
        return k + recursiveSum(k-1);
    } else {
        return 0;
    }
}


void randomMathFuncs() {
    printf("Square root of 16 %f\n", sqrt(16));
    printf("2 to the power of 3 %f\n", pow(2,3));
}
