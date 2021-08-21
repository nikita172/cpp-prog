#include <iostream>
#include <algorithm>
using namespace std;
void mergeSort(int* a, int* b,int size_a, int size_b){
    int c[size_a+size_b];
    int sizeC=sizeof(c)/sizeof(int);
    for (int i=0;i<size_a;i++){
        c[i]=a[i];
    }
    for (int i=0;i<size_b;i++){
        c[size_a+i]=b[i];
    }
    sort(c,c+size_a+size_b);
    for(int i=0;i<sizeC;i++){
        cout<<c[i];
    }
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4};
    int b[]={4,5};
    int size_a=sizeof(a)/sizeof(int);
    int size_b=sizeof(b)/sizeof(int);
    mergeSort(a,b,size_a,size_b);

    return 0;
}
