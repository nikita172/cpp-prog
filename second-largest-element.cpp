#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char const *argv[])
{
    int arr[5]={6,2,3,7,5};
    int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    cout<<arr[size-2];
    return 0;
}
