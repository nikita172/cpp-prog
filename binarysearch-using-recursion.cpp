#include <iostream>
using namespace std;
int bSearch(int *arr, int x, int first, int last)
{

    int mid = (first + last) / 2;
    if (first>last) return -1;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] < x)
    {
        return bSearch(arr, x, mid + 1, last);
    }
    else
    {
        return bSearch(arr, x, first, mid - 1);
    }

    
}
int main()
{
    int n=5;
    int low = 0;
    int high = n - 1;

    int arr[5] = {1, 2, 3, 4, 5};
    cout<<bSearch(arr, 10, low, high);

    return 0;
}
