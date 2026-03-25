/**
# Fibonacci Algorithm Comparison (C)

## Description
This project explores different approaches to computing the Fibonacci sequence and compares their performance and efficiency. It demonstrates how algorithm design impacts time complexity and execution speed.

---

## Implemented Methods

### 1.  Iterative Approach
- Uses a loop to compute values sequentially
- Efficient and avoids redundant computations

### 2. Recursive Approach
- Direct implementation using recursion
- Simple but highly inefficient for large `n` due to repeated calculations

### 3. Dynamic Programming (Bottom-Up)
- Stores previously computed values in an array
- Builds solution from smallest subproblems to largest

### 4. Dynamic Programming (Top-Down / Memoization)
- Uses recursion with memoization
- Avoids recomputation by storing intermediate results

---

## Time Complexity

| Method                  | Time Complexity |
|------------------------|-----------------|
| Recursive              | O(2^n)          |
| Iterative              | O(n)            |
| DP Bottom-Up           | O(n)            |
| DP Top-Down            | O(n)            |

---

## Features
- Multiple implementations of the same problem
- Performance comparison between approaches
- Demonstrates optimization from exponential to linear time
- Handles overflow detection

---
 */