#include <iostream>
using namespace std;
void countInversionInArray(int* arr, int size){
    int inc=0;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                inc++;
            }
        }
    }
    cout<<inc<<endl;
}
int main(int argc, char const *argv[])
{
    int arr1[]= {2,4,1,3,5};
    int size1=sizeof(arr1)/sizeof(int);
    int arr2[]= {1,2,3,4,5};
    int size2=sizeof(arr2)/sizeof(int);
    int arr3[]= {40,30,20,10};
    int size3=sizeof(arr3)/sizeof(int);
    countInversionInArray(arr1, size1);
    countInversionInArray(arr2, size2);
    countInversionInArray(arr3, size3);
    return 0;
}
