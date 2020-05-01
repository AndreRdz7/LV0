#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long n, m;
    cin >> n >> m;
    n = n % 10;
    m = m % 10;
    cout << n + m << endl;
    return 0;
}
