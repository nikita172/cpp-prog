#include <iostream>
using namespace std;
 
struct Point {
    int x = 0; // It is Considered as Default Arguments and no Error is Raised
    int y = 1;
};
 
int main()
{
    struct Point t1;
 
    // Accessing members of point p1
    // No value is Initialized then the default value is considered. ie x=0 and y=1;
    cout << "x = " << t1.x << ", y = " << t1.y<<endl;
   
    // Initializing the value of y = 20;
    t1.y = 20;
    cout << "x = " << t1.x << ", y = " << t1.y;
    return 0;
}
