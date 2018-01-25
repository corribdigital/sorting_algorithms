/**
 * C program for printing an array
 */

#include <stdio.h>

void print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}
