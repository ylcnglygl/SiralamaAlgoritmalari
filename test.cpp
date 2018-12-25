//************************************************************************************************************************************************************************************************************//
//************************************************************************************************************************************************************************************************************//

																					

//************************************************************************************************************************************************************************************************************//
//************************************************************************************************************************************************************************************************************//


#include<iostream>
using namespace std;
#include"SýralamaAlgoritmalarý.h"
#include <time.h>
int main() {

	int i;
	double duration;
	clock_t timeStart, timeEnd;
	int siralamadizisi1[1000], siralamadizisi2[10000], siralamadizisi3[100000],
		temp1[1000],temp2[10000],temp3[100000];
	srand(time(NULL));

	for (i = 0; i < 1000; i++) {
		siralamadizisi1[i] = rand() % 999;
	}

	for (i = 0; i < 10000; i++) {
		siralamadizisi2[i] = rand() % 9999;
	}

	for (i = 0; i < 100000; i++) {
		siralamadizisi3[i] = rand() % 99999;
	}



	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}

	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}

	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}
	cout << "                                  1000     10000     100000" << endl;
	cout << "Quick siralamasi calisma suresi: ";
	timeStart = clock();
	quickSort(temp1, 0, 999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	    ";

	timeStart = clock();
	quickSort(temp2, 0, 9999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	    ";

	timeStart = clock();
	quickSort(temp3, 0, 99999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << endl;

	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}

	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}

	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}

	cout << "Shell siralamasi calisma suresi: ";
	timeStart = clock();
	ShellSort(temp1,999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	    ";
	timeStart = clock();
	ShellSort(temp2, 9999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	    ";
	timeStart = clock();
	ShellSort(temp3, 99999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << endl;


	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}
	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}
	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}

	cout << "Bubble siralamasi calisma suresi:";
	timeStart = clock();
	bubbleSort(temp1, 999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "        ";
	timeStart = clock();
	bubbleSort(temp2, 9999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	       ";
	timeStart = clock();
	bubbleSort(temp3, 99999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration <<endl;

	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}
	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}
	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}

	cout << "Selection siralamasi calisma suresi: ";
	timeStart = clock();
	selectionSort(temp1, 999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout << duration << "	  ";
	timeStart = clock();
	selectionSort(temp2, 9999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout  << duration << "	       ";
	timeStart = clock();
	selectionSort(temp3, 99999);
	timeEnd = clock();
	duration = (double)(timeEnd - timeStart);
	cout  << duration << endl<<endl;

	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}
	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}
	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}
	cout << "                                  1000     10000     100000" << endl;
	cout << "Selection Sort swap degeri:       ";
	cout << selectionSortSwap(temp1, 999) << "       ";
	cout << selectionSortSwap(temp2, 9999) << "      ";
	cout << selectionSortSwap(temp3, 99999) << endl;

	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}
	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}
	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}
	cout << "Bubble Sort swap degeri:       ";
	cout << bubbleSortSwap(temp1, 999) << "     ";
	cout << bubbleSortSwap(temp2, 9999) << "    ";
	cout << -1*bubbleSortSwap(temp3, 99999) << endl;

	for (i = 0; i < 1000; i++) {
		temp1[i] = siralamadizisi1[i];
	}
	for (i = 0; i < 10000; i++) {
		temp2[i] = siralamadizisi2[i];
	}
	for (i = 0; i < 100000; i++) {
		temp3[i] = siralamadizisi3[i];
	}

	cout << "Shell Sort swap degeri:       ";
	cout << ShellSortSwap(temp1, 999) << "       ";
	cout << ShellSortSwap(temp2, 9999) << "      ";
	cout << ShellSortSwap(temp3, 99999) << endl;
	system("pause");
	return 0;
}
