## Fast Sorting Algorithm

## Merge Sort
Merge Sort is a divide-and-conquer algorithm.
It recursively divides the array into two halves until each subarray contains a single element.
Then, it merges the subarrays in a sorted order.
Time Complexity:

Best, Average, Worst Case: 
O(n log⁡n)

Space Complexity: 
O(n) (requires additional space for merging)

Key Characteristics:
Stable (maintains the relative order of equal elements).
Suitable for large datasets.
Not in-place (requires extra memory).

## Quick Sort
Quick Sort is also a divide-and-conquer algorithm.
It selects a pivot element and partitions the array into two subarrays:
Elements less than the pivot.
Elements greater than the pivot.
It then recursively sorts the subarrays.

Time Complexity:
Best and Average Case: 
O(nlogn)

Worst Case: 
O(n^2) (occurs when the pivot is the smallest or largest element repeatedly).

Space Complexity: 
O(logn) (due to recursion stack).

Key Characteristics:
Not stable.
In-place (does not require additional memory).


## Radix Sort
Radix Sort is a non-comparative sorting algorithm.
It sorts numbers by processing individual digits (or groups of digits) from the least significant digit (LSD) to the most significant digit (MSD).
It uses a stable sorting algorithm (like Counting Sort) as a subroutine to sort digits.
Time Complexity:

Best, Average, Worst Case: 
O(n⋅k), where k
k is the number of digits in the largest number.

Space Complexity: 
O(n+k)

Key Characteristics:
Stable.
Works well for sorting integers or strings.
Not suitable for floating-point numbers or negative numbers without modifications.
