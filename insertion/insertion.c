/**
 * C program for insertion sort
 */
#include <stdio.h>
#include "../print_arr.c"

void insertion_sort(int arr[], int n)
{
	for (int i = 1; i < n; i++) {
		int index = arr[i];
		int j = i;

		while (j > 0 && arr[j - 1] > index) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = index;
	}
}

int main() 
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	insertion_sort(arr, n);
	print_arr(arr, n);
	
	return 0;
}
