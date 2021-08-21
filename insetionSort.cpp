#include<iostream>
using namespace std;
void insertionSort(int* arr, int size){
    for(int i=1;i<size;i++){
        int key= arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printArray(int* arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];

    }
}
int main(int argc, char const *argv[])
{
    int arr[]={2,1,3,6,5,4};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}
