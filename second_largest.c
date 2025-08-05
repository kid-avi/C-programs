#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    first = second = -99999; // Assuming input values won't be this small

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -99999)
        printf("No second largest element found (all elements may be equal).\n");
    else
        printf("The second largest element is %d\n", second);

    return 0;
}
