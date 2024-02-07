quicksort algorithm and understand how it works, focusing on how pivot points are determined and used:

Partitioning:

The quicksort algorithm begins by partitioning the array into two sub-arrays around a pivot element.
The goal of partitioning is to place elements smaller than the pivot to its left and elements larger than the pivot to its right.
Initially, a pivot element is selected. Commonly, the last element of the array is chosen as the pivot, as in the provided code.
The ft_partition function divides the array into two sections: elements less than the pivot and elements greater than the pivot. It returns the index of the pivot element after partitioning.
Choosing a Pivot:

The pivot is a crucial element in the quicksort algorithm. It determines how the array will be partitioned.
In the provided code, the last element of the array is chosen as the pivot. This is a simple approach, but it may lead to inefficient performance in certain cases, especially if the array is already sorted or nearly sorted.
Sorting Sub-arrays:

After partitioning, the array is divided into two sub-arrays based on the pivot's index.
The quicksort algorithm is applied recursively to the sub-arrays. This process continues until the sub-arrays contain only one element or are empty.
Recursive Sorting:

The quicksort algorithm recursively sorts each sub-array.
It repeats the partitioning process and sorting for each sub-array until the entire array is sorted.
Combining Results:

As the recursion unwinds, the sorted sub-arrays are combined to produce the final sorted array.
Now, let's dive into the provided ft_partition function:

The ft_partition function takes three parameters: the array tab, and the indices low and high, representing the range of elements to partition.
It selects the pivot element (pivot) as the last element of the array (tab[high]).
The function initializes two indices i and j to partition the array. i tracks the index where elements less than the pivot will be placed, and j iterates over the array.
It then iterates over the array from index low to high - 1.
If an element tab[j] is less than the pivot, it swaps tab[i] and tab[j], and increments i.
After the loop, it swaps tab[i + 1] (which is initially the pivot) with tab[high] to place the pivot at its correct sorted position.
Finally, it returns the index of the pivot (i + 1), which will be used to divide the array into sub-arrays for further sorting.
This process is repeated recursively on the sub-arrays until the entire array is sorted.