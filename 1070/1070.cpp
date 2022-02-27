#include <iostream>

using namespace std;

int main(){

    int x;

    cin >> x;

    if (x % 2 == 1)
    {
        cout << x << endl;
        cout << x+2 << endl;
        cout << x+4 << endl;
        cout << x+6 << endl;
        cout << x+8 << endl;
        cout << x+10 << endl;
        
    }

    else
    {
        x++;
        cout << x << endl;
        cout << x+2 << endl;
        cout << x+4 << endl;
        cout << x+6 << endl;
        cout << x+8 << endl;
        cout << x+10 << endl;
    }
    
    

    return 0;
}