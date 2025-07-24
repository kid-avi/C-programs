// Write a program to create a structure Student and write a function to input and display details of multiple students.
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50
struct Student {
    char name[NAME_LENGTH];
    int age;
    float gpa;
};
void inputStudent(struct Student *student) {
    printf("Enter name: ");
    fgets(student->name, NAME_LENGTH, stdin);
    student->name[strcspn(student->name, "\n")] = 0; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &student->age);

    printf("Enter GPA: ");
    scanf("%f", &student->gpa);
    getchar(); // Clear the newline character from the input buffer
}

void displayStudent(const struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("GPA: %.2f\n", student->gpa);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;

    char choice;
    do {
        if (count < MAX_STUDENTS) {
            inputStudent(&students[count]);
            count++;
        } else {
            printf("Maximum student limit reached.\n");
            break;
        }

        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear the newline character from the input buffer
    } while (choice == 'y' || choice == 'Y');

    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        displayStudent(&students[i]);
    }

    return 0;
}
