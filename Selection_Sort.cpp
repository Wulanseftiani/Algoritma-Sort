#include <iostream>
 
using namespace std; 
void SelectionSort (int arr[], int n)
{
	int i, j, t;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n-1); j++)
		{
			if (arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}	
		}
	}	
}	
 
int main()
{
	int arr[50], n, i;
	cout<<"Masukkan Jumlah Elemen: ";
	cin>>n;
 	
	 for(i = 0; i < n; i++)
	{
		cout<<"Enter elemen "<<i+1<<": ";
		cin>>arr[i];
	}
 
	SelectionSort(arr, n);
 
	cout<<"Sorted Data ";
	for (i = 0; i < n; i++)
		cout<<"  "<<arr[i];
 
	return 0;
}

