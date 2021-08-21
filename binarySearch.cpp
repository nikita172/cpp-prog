//binary search
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int search, int size)
{
    int left = 0;
    int right = size -1;
    while(left<=right){
        int mid = (left+ right)/2;
        if (arr[mid] == search){
            return mid;
        }
        else if (search > arr[mid]){
            left = mid +1;
        }
        else {
            right = mid-1;
        }
    }
    return -1;
}

    
    int main(int argc, char const *argv[])

    {
        
        int arr[] = {2, 5, 7, 788, 99, 60};
        int size = sizeof(arr) / sizeof(int);
        sort(arr, arr+size);
        for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
        cout<<endl<<binarySearch(arr, 60, size)<<endl;
        return 0;
    }
