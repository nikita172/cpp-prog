//linear search
#include <iostream>
using namespace std;

int linearsearch(int arr[], int search, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            return i;
        }
    }
    return -1;
    
}
    int main(int argc, char const *argv[])
    {
        int arr[] = {2, 5, 7, 788, 99, 60};
        int size = sizeof(arr) / sizeof(int);
        cout<<linearsearch(arr, 10, size)<<endl;
        return 0;
    }
