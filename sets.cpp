#include<iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[8]={1,2,3,4,5,6,7,7};
    set <int> unique;
    for(int i=0;i<8;i++){
        unique.insert(arr[i]);
    }
    set <int>::iterator itr;
    for(itr=unique.begin();itr!=unique.end();itr++){
        cout<<*itr;
    }
    return 0;
}
