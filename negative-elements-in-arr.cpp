#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10]={-1,2,3,-5,-7,20,0,-6};
    int neg=0;
    for(int i=0;i<8;i++){
        if(arr[i]<0){
            neg++;
        }
    }
    cout<<"the number of negative elements in arr is: "<<neg;
    return 0;
}