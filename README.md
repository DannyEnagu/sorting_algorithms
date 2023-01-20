# 0x1B. C - Sorting algorithms & Big O

## Resource Links

1. [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
2. [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
3. [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
4. [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)(WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
5. [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
6. [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)


## Tasks

1. Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm

	- Prototype: ``void bubble_sort(int *array, size_t size);``
	- You’re expected to print the ``array`` after each time you swap two elements (See example below)
Write in the file ``0-O``, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

	- in the best case
	- in the average case
	- in the worst case

2. Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm

	- Prototype: ``void insertion_sort_list(listint_t **list);``
	- You are not allowed to modify the integer ``n`` of a node. You have to swap the nodes themselves.
	- You’re expected to print the ``list`` after each time you swap two elements (See example below)

Write in the file ``1-O``, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

	- in the best case
	- in the average case
	- in the worst case

3. Write a function that sorts an array of integers in ascending order using the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm

	- Prototype: ``void selection_sort(int *array, size_t size)``;
	- You’re expected to print the ``array`` after each time you swap two elements (See example below)

Write in the file ``2-O``, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

	- in the best case
	- in the average case
	- in the worst case

4. Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm

	- Prototype: ``void quick_sort(int *array, size_t size);``
	- You must implement the ``Lomuto`` partition scheme.
	- The pivot should always be the last element of the partition being sorted.
	- You’re expected to print the ``array`` after each time you swap two elements (See example below)

Write in the file ``3-O``, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

	- in the best case
	- in the average case
	-	in the worst case

## Thoughts

The Project implement four different sorting algorithms and Big O notation ``O(n)`` or code complexcity.
