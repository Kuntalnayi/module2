#include <stdio.h>

int main() {
    int arr[100], i, n;
    int sum = 0;
    float average;

    // Input number of elements
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    //  average
    average = (float)sum / n;

    //  results
    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
