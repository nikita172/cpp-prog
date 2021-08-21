#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, num1= 0,num2=1, next = 0;
  cout<<"enter number of terms";
  cin>>n;
  for (int i =1;i<=n;++i){
    if (i==1){
      cout<<num1<<", ";
      continue;
    }
    if (i==2){
      cout<<num2<<", ";
      continue;
    }
    next = num1+num2;
    num1 = num2;
    num2 = next;
    
    cout<<next<<" ,";

  }
  return 0;
}
