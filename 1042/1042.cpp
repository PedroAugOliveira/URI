#include <iostream>
using namespace std;

int main()
{

    int v1, v2, v3;

        cin >> v1 >> v2 >> v3;

        if (v1 < v2 && v1 < v3)
        {
            cout << v1 << endl;
            if (v2 < v3)
            {
                cout << v2 << endl;
                cout << v3 << endl << endl;
            }
            
            else
            {
                cout << v3 << endl;
                cout << v2 << endl << endl;
            }
        }

        else if (v2 < v3 && v2 < v1)
        {
            cout << v2 << endl;
            if (v1 < v3)
            {
                cout << v1 << endl;
                cout << v3 << endl << endl;
            }

            else
            {
                cout << v3 << endl;
                cout << v1 << endl << endl;
            }
        }

        else
        {
            cout << v3 << endl;
            if (v2 < v1)
            {
                cout << v2 << endl;
                cout << v1 << endl << endl;
            }

            else
            {
                cout << v1 << endl;
                cout << v2 << endl << endl;
            }
            
            
        }
        
        cout << v1 << endl;
        cout << v2 << endl;
        cout << v3 << endl;
        

    return 0;
}