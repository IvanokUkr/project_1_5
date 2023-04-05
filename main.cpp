#include <iostream>
using namespace std;

int main(void)
{
    float x, y, z;
    cout << "Calculate sum and plural" << endl;
    cout << "Enter 1 number: ";
    cin >> x;
    cout << "Enter 2 number: ";
    cin >> y;
    cout << "Enter 3 number: ";
    cin >> z;
    cout << "sum: " << x + y + z << endl;
    cout << "plural: " << x * y * z << endl;
    return 0;
}