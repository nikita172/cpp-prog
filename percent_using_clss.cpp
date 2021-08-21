#include<iostream>
#include<string.h>

using namespace std;

class Name {
    int English;
    int Hindi;
    int Maths;
    int Sst;
    int Science;
    

    public:

    Name(int e, int h, int m, int ss, int sci) {
        English = e;
        Hindi = h;
        Maths = m;
        Sst = ss;
        Science = sci;
    }



    void marks() {
        cout << "In English you got " << English << " marks"<<endl;
        cout << "In Hindi you got " << Hindi << " marks"<<endl;
        cout << "In Maths you got " << Maths << " marks"<<endl;
        cout << "In Sst you got " << Sst << " marks"<<endl;
        cout << "In Science you got " << Science << " marks"<<endl;
        
    }

    void percentage(){
        cout<< "your percentage is" <<(English+Hindi+Maths+Sst+Science)/5 <<"%"<<endl;
    }
};
    
    int main(int argc, char const *argv[])
{
    Name Nikita(100, 99,100,98,100);
    Nikita.marks();
    Nikita.percentage();

    return 0;
}