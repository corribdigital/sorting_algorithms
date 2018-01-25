/**
 * Program for bubble sort
 */
#include <stdio.h>
#include "../print_arr.c"

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < (n - i); j++) {
			if (arr[j - 1] > arr[j])
				swap(&arr[j - 1], &arr[j]);
		}
	} 
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr, n);
	print_arr(arr, n);
}
