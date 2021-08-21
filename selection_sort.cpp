#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[n];
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int tmp = arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
