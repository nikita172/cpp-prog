#include <iostream>
using namespace std;
void intersectionOfArr(int* a, int* b, int size_a, int size_b){
    for(int i=0;i<size_a;i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        for(int j=0;j<size_b;j++){
            if (a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
                
            }
            
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
