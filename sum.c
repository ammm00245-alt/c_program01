#include <stdio.h>

int add(int a, int b) { return a + b; }

int max(int a, int b) { return (a > b) ? a : b; }

float average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = add(sum, arr[i]);
    return (float)sum / n;
}

int main() {
    int n, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    for (int i = 1; i < n; i++)
        largest = max(largest, arr[i]);

    printf("Largest = %d\n", largest);
    printf("Average = %.2f\n", average(arr, n));

    return 0;
}
