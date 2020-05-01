#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    const double pi = 3.141592653;
    double r;
    cin >> r;
    cout << setprecision(9) << pi * r * r << endl;
    return 0;
}
