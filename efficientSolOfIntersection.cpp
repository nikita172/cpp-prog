#include <iostream>
using namespace std;
void intersectionOfArr(int* a, int* b, int size_a, int size_b){
    int i=0,j=0;
    
    while(i<size_a && j<size_b){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
            }
        else if(a[i]>b[j]){
            j++;
            }
        else{
            cout<<a[i];
            i++;
            j++;
        }

    }
    
}
int main(int argc, char const *argv[])
{
    int a[]={1,1,3,4,8};
    int b[]={1,1,1,4,6};
    int size_a=sizeof(a)/sizeof(int);
    int size_b=sizeof(b)/sizeof(int);
    intersectionOfArr(a, b,size_a,size_b);

    return 0;
}
