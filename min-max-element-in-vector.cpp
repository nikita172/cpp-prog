#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> numbersList;
    numbersList.push_back(10);
    numbersList.push_back(20);
    numbersList.push_back(5);
    numbersList.push_back(3);
    numbersList.push_back(500);
    numbersList.push_back(30);
    sort(numbersList.begin(),numbersList.end());
    vector <int>::iterator i;
    for(i=numbersList.begin();i!=numbersList.end();i++){
        cout<<*i<<" ";
    }
    
    return 0;
}
