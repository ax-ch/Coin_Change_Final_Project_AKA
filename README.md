# 🪙 Coin Change Problem: Iterative vs. Recursive 🪙

This project explores the **Coin Change Problem** by comparing two classic algorithmic strategies. We analyze the performance gap between an intuitive recursive approach and an optimized iterative dynamic programming approach.

## 🚀 Overview
The goal is to find the total number of unique ways to make change for a target sum using a specific set of euro coin denominations: `{1, 2, 5, 10, 20, 50}`.

### The Algorithms
1.  **Top-Down Recursion**: A direct, "divide and conquer" approach. It is easy to implement but suffers from redundant calculations, resulting in **Exponential Time Complexity $O(2^n)$**.
2.  **Bottom-Up Iterative (DP)**: Uses **Tabulation** to store solutions to subproblems in a 2D table. This avoids repeated work, achieving **Polynomial Time Complexity $O(n \cdot S)$**.

## 🛠️ Project Structure
The project is built using a modular **Abstract Data Type (ADT)** approach:
* `coin.h`: Function declarations and header guards.
* `coin.cpp`: Implementation of the calculation logic.
* `main.cpp`: Driver file for user input and `<chrono>` benchmarking.

## 📊 Performance Comparison
Benchmark results reveal a significant efficiency gap as the target sum increases:

| Target Sum | Iterative Time (μs) | Recursive Time (μs) | Observation |
| :--- | :--- | :--- | :--- |
| **10** | ~10 | ~1 | Recursion is faster (low overhead) |
| **100** | ~30 | ~5,000 | DP starts to pull ahead |
| **500** | ~50 | ~15,000,000 | Recursion shows massive lag |
| **1000** | ~100 | *Timeout/Hang* | DP is the clear winner |

## 📝 Conclusion
The project demonstrates that while recursion is mathematically elegant for small inputs, **Dynamic Programming** is essential for scalability. By using a DP table, we transform a computationally "expensive" problem into a highly efficient one.

 
**Language:** C++  
**Report Topic:** Comparative Analysis of Iterative and Recursive Algorithms for the Coin Change Problem 
