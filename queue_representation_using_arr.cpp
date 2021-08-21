#include <iostream>
using namespace std;
int top = -1, arr[100], n = 100, first = -1;
void Insert(){
    int value;
    if (top == n - 1)
    {
        cout << "queue overflow";
    }
    else
    {
        if (first == -1)
        {
            first = 0;
        }
        cout << "Insert the element in queue : " << endl;
        
        cin>>value;
        top++;
        arr[top] = value;
        
    }
}
void delet()
{
    if (first == -1 || first>top)
    {
        cout << " queue underflow";
        return;
    }
    else
    {
        cout<<"Element deleted from queue is : "<< arr[first]<<endl;
        first++;
    }
}
void display()
{
    if (first == -1)
    {
        cout << "queue is empty";
    }
    else{
        cout<<"queue elements are: ";
        for (int i = first; i <= top; i++)
        {
            cout << arr[i]<<" ";
        }
}
}
int main()
{
    int ch;
    cout << "1. enter to insert"<<endl;
    cout << "2. enter to delete"<<endl;
    cout << "3. enter to display"<<endl;
    cout << "4. enter to exit"<<endl;

    do
    {
        cout << "enter your choice:  ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"exit";
            break;
        default:
        cout<<"invalid";
        }
    }
        while (ch != 4);

        return 0;
    }
