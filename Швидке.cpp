//#include "pch.h"
#include <iostream>

using namespace std;

void quickSort(int arr[], int left, int right) //функція швидкого сортування
{
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];
	
	while (i <= j) //розділення
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	//виклик рекурсії
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

void print(int arr[], int n) //функція друку
{
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int n; //число елементів масива
	cin >> n; //введення числа елементів масива
	int i; //елемент масиву
	int* arr = new int[n]; //одниничний динамічний масив
	for (i = 0;i < n;i++) 
	{
		cin >> arr[i]; //введення чисел у масив
	}
	quickSort(arr, 0, n - 1); //виклик сортування
	print(arr, n); //друк відсортованого масиву
	return 0;
}