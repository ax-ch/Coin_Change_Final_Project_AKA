# Coin Change Problem: Iterative vs. Recursive

**Report Title:** Comparative Analysis of Iterative and Recursive Algorithms for the Coin Change Problem

**Language:** C++

## Problem Description
The goal is to determine the total number of unique ways to make change for a target sum using the euro set of coin denominations: `{1, 2, 5, 10, 20, 50}`. This project demonstrates how different algorithmic paradigms handle the "state-space explosion" as the target sum grows.

## Algorithm Logic

### 1. Recursive Method (Top-Down)
* **Concept**: Uses a "divide and conquer" strategy. At each step, it branches into two choices: including the current coin or skipping to the next.
* **Complexity**: $O(2^n)$ (Exponential).
* **Behavior**: It does not store results, meaning it recalculates the same sub-sums thousands of times. It is fast for tiny sums but becomes unstable as the sum increases.

### 2. Iterative Method (Bottom-Up)
* **Concept**: Implements **Dynamic Programming (Tabulation)**. It solves for small amounts first (0, 1, 2...) and stores them in a 2D table.
* **Complexity**: $O(n \cdot S)$ (Polynomial), where $n$ is the number of coins and $S$ is the sum.
* **Behavior**: By looking up previously solved subproblems in the table, it avoids all redundant work, making it the superior choice for large-scale inputs.

## Benchmarking Guide
Use these values to observe the efficiency gap in the console:

| Target Sum | Logic Observation |
| :--- | :--- |
| **5 - 20** | Recursive is fast due to low overhead. |
| **40 - 100** | Iterative becomes faster than Recursive. |
| **500** | Recursive shows significant lag. |
| **1000** | Iterative is instant; Recursive may hang/timeout. |

## Project Structure
The project uses a modular **ADT (Abstract Data Type)** approach:
* `coin.h`: Function prototypes and standard library includes.
* `coin.cpp`: The calculation logic for both algorithms.
* `main.cpp`: The driver file that handles user input and timing via `<chrono>`.
