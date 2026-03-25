/**
 * Fibonacci Algorithm Comparison Header File
 */
#ifndef FIBONACCI_H
#define FIBONACCI_H

 /**
 * Compute the nth Fibonacci number using an iterative approach.
 * @param n The index of the Fibonacci number to compute (n >= 0).
 * @return The nth Fibonacci number, and -1 if overflow occurs.
 */
int iterative_fibonacci(int n);

/**
 * Compute the nth Fibonacci number using a recursive approach.
 * @param n The index of the Fibonacci number to compute (n >= 0).
 * @return The nth Fibonacci number, and -1 if overflow occurs.
 */
int recursive_fibonacci(int n);

/**
 * Compute the nth Fibonacci number using dynamic programming (bottom-up).
 * Stores computed values in array a[].
 * @param a Pointer to an integer array of size at least n+1.
 * @param n The index of the Fibonacci number to compute (n >= 0).
 * @return The nth Fibonacci number, and -1 if overflow occurs.
 */
int dpbu_fibonacci(int *a, int n);

/**
 * Compute the nth Fibonacci number using dynamic programming (top-down).
 * Stores computed values in array a[].
 * @param a Pointer to an integer array of size at least n+1.
 * @param n The index of the Fibonacci number to compute (n >= 0).
 * @return The nth Fibonacci number, and -1 if overflow occurs.
 */
int dptd_fibonacci(int *a, int n);

#endif // FIBONACCI_H