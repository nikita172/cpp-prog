#include<iostream>
using namespace std;

void nikita(int i){
    cout<<i*i<<endl;
}
void nikita(int i, int j){
    cout<<i*j<<endl;
}
void nikita(char const* i){
    cout<<i<<endl;
}
void nikita(float i){
    cout<<i*i<<endl;
}
void nikita(double i){
    cout<<i<<endl;
}
int main(){
    nikita(2);
    nikita(2,3);
    nikita("nik");
    nikita(2.45f);
    nikita(2.4345);

    return 0;
}
