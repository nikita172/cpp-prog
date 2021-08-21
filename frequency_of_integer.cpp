#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str = "1234518687938";
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            count1++;
        }
        if (str[i] == '2')
        {
            count2++;
        }
        if (str[i] == '3')
        {
            count3++;
        }
        if (str[i] == '4')
        {
            count4++;
        }
        if (str[i] == '5')
        {
            count5++;
        }
        if (str[i] == '6')
        {
            count6++;
        }
        if (str[i] == '7')
        {
            count7++;
        }
        if (str[i] == '8')
        {
            count8++;
        }
        if (str[i] == '9')
        {
            count9++;
        }
    }
    cout << "number of 1 are:" << count1 << endl;
    cout << "number of 2 are:" << count2 << endl;
    cout << "number of 3 are:" << count3 << endl;
    cout << "number of 4 are:" << count4 << endl;
    cout << "number of 5 are:" << count5 << endl;
    cout << "number of 6 are:" << count6 << endl;
    cout << "number of 7 are:" << count7 << endl;
    cout << "number of 8 are:" << count8 << endl;
    cout << "number of 9 are:" << count9 << endl;

    return 0;
}
