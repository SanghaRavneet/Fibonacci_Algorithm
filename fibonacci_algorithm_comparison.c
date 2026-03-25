#include "fibonacci_algorithm_comparison.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int iterative_fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        if (b > INT_MAX - a) return -1;
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int recursive_fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = recursive_fibonacci(n - 1);
    int b = recursive_fibonacci(n - 2);
    if (a == -1 || b == -1 || a > INT_MAX - b) return -1;
    return a + b;
}

int dpbu_fibonacci(int *a, int n) {
    if (n < 0) return -1;

    a[0] = 0;
    if (n == 0) return 0;

    a[1] = 1;
    if (n == 1) return 1;

    for (int i = 2; i <= n; i++) {
        if (a[i - 1] > INT_MAX - a[i - 2])
            return -1;
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
}

int dptd_fibonacci(int *a, int n) {
    if (n < 0) return -1;

    a[n] = 0;
    if (n == 0) return 0;

    a[n - 1] = 1;
    if (n == 1) return 1;

    for (int i = n - 2; i >= 0; i--) {
        if (a[i + 1] > INT_MAX - a[i + 2])
            return -1;
        a[i] = a[i + 1] + a[i + 2];
    }
    return a[0];
}

int main() {
    int n, choice;

    printf("Enter 1 for iterative, 2 for recursive, 3 for DP bottom-up, 4 for DP top-down: ");
    scanf("%d", &choice);

    printf("Enter n: ");
    scanf("%d", &n);

    int result;
    clock_t start, end;
    double time_taken;

    start = clock();  // START TIMER

    switch (choice) {
        case 1:
            result = iterative_fibonacci(n);
            break;
        case 2:
            result = recursive_fibonacci(n);
            break;
        case 3: {
            int *dp_array = (int *)malloc((n + 1) * sizeof(int));
            result = dpbu_fibonacci(dp_array, n);
            free(dp_array);
            break;
        }
        case 4: {
            int *dp_array2 = (int *)malloc((n + 1) * sizeof(int));
            result = dptd_fibonacci(dp_array2, n);
            free(dp_array2);
            break;
        }
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    end = clock();  // END TIMER

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Fibonacci(%d) = %d\n", n, result);
    printf("Time taken: %.6f seconds\n", time_taken);

    return 0;
}


