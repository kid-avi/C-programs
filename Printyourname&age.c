// Print your name, age taken from user input in C

#include <stdio.h>  
int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);  // Limit input to avoid buffer overflow
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}