#include <iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;

    cout << X / 365 << " ano(s)" << endl;
    X = X%365;
    cout << X / 30 << " mes(es)" << endl;
    X = X%30;
    cout << X << " dia(s)" << endl;
    return 0;
}
