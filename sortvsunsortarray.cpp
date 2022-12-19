// CPP program to demonstrate processing
// time of sorted and unsorted array
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

const int N = 100001;

int main()
{
	int arr[N];

	// Assign random values to array
	for (int i=0; i<N; i++)
		arr[i] = rand()%N;

	// for loop for unsorted array
	int count = 0;
	double start = clock();
	for (int i=0; i<N; i++)
		if (arr[i] < N/2)
			count++;

	double end = clock();
	cout << "Time for unsorted array :: "
		<< ((end - start)/CLOCKS_PER_SEC)
		<< endl;
	sort(arr, arr+N);

	// for loop for sorted array
	count = 0;
	start = clock();

	for (int i=0; i<N; i++)
		if (arr[i] < N/2)
			count++;

	end = clock();
	cout << "Time for sorted array :: "
		<< ((end - start)/CLOCKS_PER_SEC)
		<< endl;

	return 0;
}
