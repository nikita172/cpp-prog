#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> deleteNumber;
    deleteNumber.push_back(10);
    deleteNumber.push_back(20);
    deleteNumber.push_back(30);
    deleteNumber.push_back(40);
    deleteNumber.push_back(50);
    vector<int> ::iterator it;
    it=deleteNumber.begin()+2;
    deleteNumber.erase(it);//delete 3rd element
    vector<int> ::iterator i;
    for(i=deleteNumber.begin();i!=deleteNumber.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
