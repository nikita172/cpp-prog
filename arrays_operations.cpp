#include<iostream>
#define MAX 10
using namespace std;
void inserAtPosition(int* arr,int val,int index,int pos){
    for(int i=index;i>=pos;i--){
        arr[i+1]=arr[i];
        
    }
    index++;
    arr[pos]=val;
    for(int i=0;i<=index;i++){
        cout<<arr[i];
    }
} 
void inserAtBegining(int* arr,int val,int index){
    if(index>=MAX){
        cout<<"array is full";
    }
    
    for (int i=index;i>=0;i--){
        arr[i+1]=arr[i];
    }
    index++;
    arr[0]=val;
    for(int i=0;i<=index;i++){
        cout<<arr[i];
    }

} 

void insertAtEnd (int* arr,int index,int val){
    if(index>=MAX){
        "insertion at end is not possible";
    }
    else{
        arr[++index]=val;
    }
    for(int i=0;i<=index;i++){
        cout<<arr[i];
    }
}

int main(int argc, char const *argv[])
{
    int ind=2;
    int arr[10]={1,2,3};
    inserAtBegining(arr,2,ind);
    cout<<endl;
    insertAtEnd(arr,ind,4);
    cout<<endl;
    inserAtPosition(arr,5,ind,1);
    
    
    return 0;
}
  
    