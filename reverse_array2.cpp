#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int arr[5]= {1,2,3,4,5};
    int new_arr[5];
    int len = sizeof(arr)/sizeof(int);

    for(int i=0;i<len;i++){
        new_arr[i]=arr[len- i-1];
    }
    for (int i=0;i<len;i++){
        cout<<new_arr[i];
    }

    return 0;
}
