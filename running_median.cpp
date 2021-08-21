#include<iostream>
#include<algorithm>
using namespace std;

void runningMedian(int*arr,int size){
    for(int i=0;i<size;i++){
        sort(arr,arr+i+1);
        
         if((i+1)%2==0){
             float n = arr[i/2]+arr[i/2+1];
             cout<<n/2<<endl;
         }
         else{
             cout<<arr[i/2]<<endl;
         }
        
    }
}
int main(int argc, char const *argv[])
{
    int arr[7]={2, 1, 5, 7, 2, 0, 5};
    int size = sizeof(arr)/sizeof(int);
    runningMedian(arr,size);
}

