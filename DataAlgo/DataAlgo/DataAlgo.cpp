#include <stdio.h>

int BinarySearch(int arr[], int length, int search);
int LinearSearch(int arr[], int length, int search);

int main()
{
	int arr[] = {5, 6 ,8 ,10, 15, 18};
	int wait;
	int index = BinarySearch(arr, sizeof(arr) / sizeof(int), 7);
	printf("%d", index);

	scanf("%d", &wait);

	return 0;
}

int LinearSearch(int arr[], int length, int search) {

	for (int i = 0; i < length; i++) {

		if (arr[i] == search)
			return i;

		else
			return -1;
	}
}

int BinarySearch(int arr[], int length, int search) {

	int first = 0;
	int last = length;
	int mid;

	while (first <= last) {

		mid = (first + last) / 2;

		if (search == arr[mid]) {
			return mid;
		}
		else {
			if (search < arr[mid]) {
				last = mid -1;
			}

			else {
				first = mid +1;
			}
		}

		
	}


	return -1;
}