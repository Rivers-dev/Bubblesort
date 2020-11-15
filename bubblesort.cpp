#include <iostream>
#include <bits/stdc++.h>"
using namespace std;

void swap(int *xp, int *yp) //Swaps the value of the pointers for use in the bubble sort "for" loop
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printArr(int arr[], int size) //Simple loop to iterate through the array and print it
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}


int main()
{
    //Test case arrays
	int test1[] = {23, 78, 43, 14, 90, 82};
	int test2[] = {65, 32, 17, 75, 55, 4};

	int n = sizeof(test1)/sizeof(test1[0]);
	int o = sizeof(test2)/sizeof(test2[0]);

	bubbleSort(test1, n);
	bubbleSort(test2, o);

	cout << "Test array 1: \n";
	printArr(test1, n);
	cout << "Test array 2: \n";
	printArr(test2, o);
	return 0;
}

