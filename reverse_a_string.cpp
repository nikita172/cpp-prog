#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  string n = "23456";
  for (int i =n.length()-1;i>=0;--i){
    cout<<n[i];
  }
  return 0;
}
