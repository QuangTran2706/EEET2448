#include <stdio.h>

int max_mum(int* arr, int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        max = (max > arr[i]) ? max : arr[i];
    }

    return max;
}

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter amount of number you want: ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter your set of number: ");
        scanf("%d", &arr[i]);
    }

    int maximum = max_mum(arr, n);
    printf("maximum number of the array: %d \n", maximum);
    return 0;
}
