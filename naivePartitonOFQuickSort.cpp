#include <iostream>
using namespace std;
void naivePartition(int* arr,int low ,int high, int partition){
    int temparr[6];
    int index =0;
    for(int i=0;i<=high;i++){
        if (arr[i]<=arr[partition]){
        temparr[index]=arr[i];
        index++;
        }
    }
    for(int i=0;i<=high;i++){
        if(arr[i]>arr[partition]){
            temparr[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<=high;i++){
        arr[i]=temparr[i];
        cout<<arr[i]<<" ";
    }

}
int main(int argc, char const *argv[])
{
    int arr[]={3,8,6,12,10,7};
    int low=0;
    int high = 5;
    int partition=5;
    naivePartition(arr, low,high,partition);
    return 0;
}
