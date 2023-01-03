[![kwuest's 42 C Piscine C 01 Score](https://badge42.vercel.app/api/v2/clb55h6z600300fkzy9cemaa4/project/2904556)](https://github.com/JaeSeoKim/badge42)
```diff
+ ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK |
- ex08: Nothing turned in
```
85%

## ex08: [ft_sort_int_tab](https://github.com/kierenwuest/42AdelaidePiscine/blob/main/C01/ex08/ft_sort_int_tab.c): Post piscine attepmt 

• Create a function which sorts an array of integers by ascending order.

• The arguments are a pointer to int and the number of ints in the array.

Std Output
```
Input : 987654321
Output: 123456789
```
### ex08: Notes:

Sort Algorithm:

My ft_sort_int_tab function is implementing a bubble sort algorithm, which is not the most efficient way to sort an array of integers. Quicksort or merge sort algorithms sort an array more efficiently.


Bubble sort is a simple sorting algorithm that works by repeatedly iterating through the array, comparing adjacent elements, and swapping them if they are in the wrong order. It has a time complexity of O(n^2) in the worst case, which makes it less efficient than some other sorting algorithms for large arrays.


Quicksort has a time complexity of O(n*log(n)) on average, which makes it more efficient than bubble sort for large arrays. However, quicksort can have a worst-case time complexity of O(n^2), which makes it less efficient than some other sorting algorithms in the worst case.


Merge sort has a time complexity of O(n*log(n)), which makes it more efficient than bubble sort and quicksort for large arrays. Merge sort is a stable sort, which means that the relative order of elements with equal keys is preserved.

Sizeof Array:

Size of the array is calculated as `sizeof(array) / sizeof(int)`. The sizeof(array) expression returns the total size of the array in bytes, and sizeof(int) returns the size of a single element in the array in bytes. Dividing the total size of the array by the size of a single element gives the number of elements in the array.
