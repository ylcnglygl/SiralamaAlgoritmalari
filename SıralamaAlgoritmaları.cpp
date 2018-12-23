#include "SýralamaAlgoritmalarý.h"
#include<iostream>
void selectionSort(int dizi[], int elemanSayisi)
{
	int i, j, enKucuk, temp;
	for (i = 0; i < elemanSayisi - 1; i++)
	{
		enKucuk = i;
		for (j = i + 1; j < elemanSayisi; j++)
		{
			if (dizi[j] < dizi[enKucuk])
				enKucuk = j;
		}
		temp = dizi[i];
		dizi[i] = dizi[enKucuk];
		dizi[enKucuk] = temp;
	}
	
}

void bubbleSort(int dizi[], int elemanSayisi)
{
	int temp,count=0;
	int i, j;

	for (i = 1; i < elemanSayisi; i++)
	{
		for (j = 0; j < elemanSayisi - i; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
				count++;
			}
		}
	}
}

int partition(int A[], int p, int r) {
	int tmp;
	int x = A[r];
	int i = p - 1;

	for (int j = p; j <= r - 1; j++)
	{
		if (A[j] <= x)
		{
			i++;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}

void quickSort(int A[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

void ShellSort(int * dizi, int N)
{
	int i, j, h, temp;

	for (h = 1; h <= N / 9; h = 3 * h + 1)
		;
	while (h) {
		for (i = h; i < N; i += 1) {
			temp = dizi[i];
			for (j = i; j > h - 1 && temp < dizi[j - h]; j -= h)
				dizi[j] = dizi[j - h];
			dizi[j] = temp;
			
		}
		h /= 3;
	}
}

int selectionSortSwap(int dizi[], int elemanSayisi)
{
	int i, j, enKucuk, temp,count=0;
	for (i = 0; i < elemanSayisi - 1; i++)
	{
		enKucuk = i;
		for (j = i + 1; j < elemanSayisi; j++)
		{
			if (dizi[j] < dizi[enKucuk])
				enKucuk = j;
		}
		temp = dizi[i];
		dizi[i] = dizi[enKucuk];
		dizi[enKucuk] = temp;
		count++;
	}
	return count;
}
int bubbleSortSwap(int dizi[], int elemanSayisi)
{
	int temp, count = 0;
	int i, j;

	for (i = 1; i < elemanSayisi; i++)
	{
		for (j = 0; j < elemanSayisi - i; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
				count++;
			}
		}
	}
	return count;
}

int ShellSortSwap(int * dizi, int N)
{
	int i, j, h, temp,count=0;

	for (h = 1; h <= N / 9; h = 3 * h + 1)
		;
	while (h) {
		for (i = h; i < N; i += 1) {
			temp = dizi[i];
			for (j = i; j > h - 1 && temp < dizi[j - h]; j -= h)
				dizi[j] = dizi[j - h];
			dizi[j] = temp;
			count++;
		}
		h /= 3;
	}
	return count;
}