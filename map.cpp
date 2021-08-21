#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,7,3,44,1,5,7};
    int len = sizeof(arr)/sizeof(int);
    map <int ,int>m1;
    for(int i=0;i<len;i++){
        map <int, int>::iterator itr =m1.find(arr[i]);
        if(itr==m1.end()){
            m1.insert(pair<int ,int> (arr[i],1));
        }
        else{
            itr->second=itr->second+1;
        }
    }
    map<int,int>::iterator it;
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" is present ";
        cout<<it->second<<" times ";
        cout<<endl;
    }
    return 0;
}
