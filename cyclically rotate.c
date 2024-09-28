#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    i = n - 1;
    j = n - 2;
    while (i > 0) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i --;
        j --;
    }
    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
