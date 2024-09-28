#include <stdio.h>
int main() {
    int i, n, max, min;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }
        i = 2;
    } else {
        min = arr[0];
        max = arr[0];
        i = 1;
    }
    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > max) max = arr[i];
            if (arr[i + 1] < min) min = arr[i + 1];
        } else {
            if (arr[i + 1] > max) max = arr[i + 1];
            if (arr[i] < min) min = arr[i];
        }
        i = i + 2;
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
