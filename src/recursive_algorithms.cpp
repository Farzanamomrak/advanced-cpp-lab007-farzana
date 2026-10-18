#include "project/recursive_algorithms.h"

#include <stdexcept>
#include <utility>
#include <vector>

// helper function for recursive binary search.
int binarySearchHelper(const std::vector<int>& array, int target, int left, int right) {
    // base case , empty search range.
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    // base case: target found at mid.
    if (array[mid] == target) {
        return mid;
    }
    // recursive case: search the left half.
    if (target < array[mid]) {
        return binarySearchHelper(array, target, left, mid - 1);
    }
    // recursive case: search the right half.
    return binarySearchHelper(array, target, mid + 1, right);
}

// helper function for recursive array sum.
int arraySumHelper(const std::vector<int>& array, std::size_t index) {
    // base case: reached the end of the array.
    if (index == array.size()) {
        return 0;
    }
    // recursive case: current element + sum of the rest.
    return array[index] + arraySumHelper(array, index + 1);
}

// helper function for recursive in-place array reversal.
void reverseArrayHelper(std::vector<int>& array, std::size_t left, std::size_t right) {
    // base case: left index is greater than or equal to right index.
    if (left >= right) {
        return;
    }
    // recursive case: swap the outer elements.
    std::swap(array[left], array[right]);
    // recursive case: reverse the remaining middle part.
    reverseArrayHelper(array, left + 1, right - 1);
}

// Recursive factorial.
int factorial(int n) {
    // to validate input
    if (n<0)
        throw std::invalid_argument("Negative input not allowed: factorial");
    // base case: n == 0 or n == 1
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Iterative factorial comparison.
int factorialIterative(int n) {
    if (n<0) {
        throw std::invalid_argument("Negative input not allowed: factorialIterative");
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Fibonacci implemented recursively.
int fibonacci(int n) {
    if (n<0) {
        throw std::invalid_argument("Negative input not allowed: fibonacci");
    }
    // base case: n == 0 or n == 1
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// iterative fibonacci comparison.
int fibonacciIterative(int n) {
    // validate input
    if (n<0) {
        throw std::invalid_argument("Negative input not allowed: fibonacciIterative");
    }
    // base case
    if (n==0)
        return 0;
    int previous = 0;
    int current = 1;
    // calculates each Fibonacci number iteratively.
    for (int i = 2; i <= n; ++i) {
        int next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}

// recursive binary search
int binarySearch(const std::vector<int>& array, int target) {
    // begining with the entire array.
    return binarySearchHelper(array, target, 0, static_cast<int>(array.size()) - 1);
}
// iterative binary search comparison.
int binarySearchIterative(const std::vector<int>& array, int target) {
    int left =0;
    int right = static_cast<int>(array.size()) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (target < array[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

// recursive array sum.
int arraySum(const std::vector<int>& array) {
    return arraySumHelper(array,0);
}

// iterative array sum comparison.
int arraySumIterative(const std::vector<int>& array) {
    int sum =0;
    for (int value : array) {
        sum += value;
    }
    return sum;
}

// recursive in-place reversal.
void reverseArray(std::vector<int>& array) {
    // base case: array of size 0 or 1 does not need to be reversed.
    if (array.size() <= 1) {
        return;
    }
    // recursive case: call helper to reverse the array in place.
    reverseArrayHelper(array, 0, static_cast<int>(array.size()) - 1);
}

// iterative reverse comparison.
void reverseArrayIterative(std::vector<int>& array) {
    if (array.size() <= 1) {
        return;
    } 
    std::size_t left = 0;
    std::size_t right = array.size() - 1;
    while (left < right) {
        std::swap(array[left], array[right]);
        ++left;
        --right;
    }
}
