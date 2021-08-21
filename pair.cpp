#include <iostream>
#include <utility>
using namespace std;
int main(int argc, char const *argv[])
{
    pair <int, int> fun1 (10,20);
    pair <int, int>fun2;
    fun2=make_pair(1,2);
    cout<<fun1.first<<fun1.second;
    cout<<fun2.first<<fun2.second;
    
    return 0;
}
