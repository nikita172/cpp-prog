#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = {100, 20, 4, 5};
	int size = sizeof(arr) / sizeof(int);
	cout<<"the initial array is:  ";
	for (int i:arr)
	{
		cout <<i<<" ";
	}
	
	cout << endl;
	for (int i = 0; i < size - 1; i++)
	{

		for (int j = 0; j < size-i- 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];//* or we can use 
				arr[j + 1] = temp;//* swap(arr[j], arr[j+1])
			}
			for (int i : arr)
			{
				cout << i << " ";
			}
			cout<<endl;
			
			
		}
		cout<<endl;
	}

		return 0;
	}