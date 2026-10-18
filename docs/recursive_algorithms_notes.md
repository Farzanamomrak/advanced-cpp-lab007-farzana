# Recursive Algorithms Laboratory Notes

Students should implement each required function recursively, without using loops in the recursive versions.

## Required Algorithms

1. `factorial(n)`
2. `fibonacci(n)`
3. `binarySearch(array, target)`
4. `arraySum(array)`
5. `reverseArray(array)`

## Expected Design

- Identify and comment on the base case for each implementation.
- Identify and comment on the recursive case for each implementation.
- Use clear parameter names and return values.
- Include validation for invalid or unsupported inputs.
- For comparison, also implement iterative versions.

## Comparison Requirement

For each algorithm where an iterative solution is reasonable, provide a written comparison covering:

- time complexity;
- space complexity;
- number and depth of recursive calls;
- readability and maintainability;
- advantages and disadvantages of recursion;
- stack overflow risk;
- Big-Oh analysis for both recursive and iterative forms.

## Recursive vs. Iterative Comparison

### Factorial

The recursive factorial function calls itself with a smaller value until it reaches the base case. The iterative version uses a loop to multiply the numbers from 2 to n.

- Recursive time complexity:O(n)
- Recursive space complexity:O(n)
- Iterative time complexity:O(n)
- Iterative space complexity:O(1)

The recursive version makes O(n) calls and has a maximum call depth of O(n). Recursion follows the mathematical definition of factorial and is easy to understand. But, it uses more memory and has a bigger risk of stack overflow. The iterative version uses constant extra space and avoids recursive call overhead.

### Fibonacci

The recursive Fibonacci function calls itself twice for most inputs. The iterative version calculates each number using the previous two values.

- Recursive time complexity:O(2^n)
- Recursive space complexity:O(n)
- Iterative time complexity:O(n)
- Iterative space complexity:O(1)

The recursive version makes an exponential number of calls because it repeats calculations. Its maximum call depth is O(n). Although recursion shows the mathematical definition clearly, the iterative version is much faster and uses less memory. It is much more practical for larger inputs.

### Binary Search

Binary search requires a sorted array. The recursive version calls itself on the left or right half of the search range. The iterative version uses a loop to narrow the range.

- Recursive time complexity:O(log n)
- Recursive space complexity:O(log n)
- Iterative time complexity:O(log n)
- Iterative space complexity:O(1)

The recursive version makes O(log n) calls in the worst case and has O(log n) call depth. Both versions are efficient. Recursion can make the algorithm easier to follow, while iteration uses less memory and avoids recursive call overhead.

### Array Sum

The recursive version adds the current element to the sum of the remaining elements. The iterative version uses a loop to add each element.

- Recursive time complexity:O(n)
- Recursive space complexity:O(n)
- Iterative time complexity:O(n)
- Iterative space complexity:O(1)

The recursive version makes O(n) calls and has O(n) call depth. It clearly demonstrates how a problem can be divided into smaller problems. However, it uses additional stack memory. The iterative version is more memory-efficient and avoids stack overflow from deep recursion.

### Reverse Array

The recursive version swaps the first and last elements, then recursively processes the remaining middle section. The iterative version uses a loop to swap elements from the outside inward. Both versions modify the original array.

- Recursive time complexity:O(n)
- Recursive space complexity:O(n)
- Iterative time complexity:O(n)
- Iterative space complexity:O(1)

The recursive version makes O(n) calls and has O(n) call depth, although it performs around n/2 swaps. The iterative version also performs about n/2 swaps but uses constant extra space. Both approaches are useful, but the iterative version avoids the risk of stack overflow.

### Overall Comparison

Recursion functions can be useful when a problem can naturally be divided into smaller versions of itself. It can make code easier to understand, especially for binary search and problems with clear base cases. However, recursive functions use additional call-stack memory and may cause stack overflow when the recursion becomes too deep.
Iteration usually uses less memory and avoids recursive call overhead. This is especially important for Fibonacci because the simple recursive version repeats many calculations. Both approaches are useful, and the best choice depends on the problem and its requirements.
