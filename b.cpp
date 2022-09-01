#include <iostream>
using namespace std;
int main()
{
    unsigned u = 10, u2 = 42;
    cout << "u2 - u" << u2 - u << endl; // result is 32
    cout << "u - u2" << u - u2 << endl; // result will wrap around
    int i = 10, i2 = 42;
    cout << "i2 - i" << i2 - i << endl;// result is 32
    cout << "i - i2" <<  i - i2 << endl;// result is -32
    cout << "i - u" << i - u << endl;// print 0
    cout << "u - i" <<u - i << endl;// print 0
    return 0;
}