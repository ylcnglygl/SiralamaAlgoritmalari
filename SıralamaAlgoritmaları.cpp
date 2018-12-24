#include "SiralamaAlgoritmalari.h"//turkce karakter sorunu duzeltildi. 
#include<iostream>
void selectionSort(int dizi[], int elemanSayisi)//"temp" adlı degisken "gecici" olarak degistirildi.
{
	int i, j, enKucuk, gecici;
	for (i = 0; i < elemanSayisi - 1; i++)
	{
		enKucuk = i;
		for (j = i + 1; j < elemanSayisi; j++)
		{
			if (dizi[j] < dizi[enKucuk])
				enKucuk = j;
		}
		gecici = dizi[i];
		dizi[i] = dizi[enKucuk];
		dizi[enKucuk] = gecici;
	}
	
}

void bubbleSort(int dizi[], int elemanSayisi)//fonksiyonlarin isimleri Turkce yazilabilir.
{
	int gecici,count=0;
	int i, j;

	for (i = 1; i < elemanSayisi; i++)
	{
		for (j = 0; j < elemanSayisi - i; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				gecici = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = gecici;
				count++;
			}
		}
	}
}

int partition(int A[], int p, int r) {
	int gecici;
	int x = A[r];
	int i = p - 1;

	for (int j = p; j <= r - 1; j++)
	{
		if (A[j] <= x)
		{
			i++;
			gecici = A[i];
			A[i] = A[j];
			A[j] = gecici;
		}
	}
	gecici = A[i + 1];
	A[i + 1] = A[r];
	A[r] = gecici;
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
	int i, j, h, gecici;

	for (h = 1; h <= N / 9; h = 3 * h + 1)
		;
	while (h) {
		for (i = h; i < N; i += 1) {
			gecici = dizi[i];
			for (j = i; j > h - 1 && gecici < dizi[j - h]; j -= h)
				dizi[j] = dizi[j - h];
			dizi[j] = gecici;
			
		}
		h /= 3;
	}
}

int selectionSortSwap(int dizi[], int elemanSayisi)
{
	int i, j, enKucuk, gecici,sayac=0;
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
		dizi[enKucuk] = gecici;
		sayac++;
	}
	return sayac;
}
int bubbleSortSwap(int dizi[], int elemanSayisi)
{
	int gecici, sayac = 0;
	int i, j;

	for (i = 1; i < elemanSayisi; i++)
	{
		for (j = 0; j < elemanSayisi - i; j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				gecici = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = gecici;
				sayac++;
			}
		}
	}
	return sayac;
}

int ShellSortSwap(int * dizi, int N)
{
	int i, j, h, gecici,sayac=0;

	for (h = 1; h <= N / 9; h = 3 * h + 1)
		;
	while (h) {
		for (i = h; i < N; i += 1) {
			gecici = dizi[i];
			for (j = i; j > h - 1 && gecici < dizi[j - h]; j -= h)
				dizi[j] = dizi[j - h];
			dizi[j] = gecici;
			sayac++;
		}
		h /= 3;
	}
	return sayac;
}
