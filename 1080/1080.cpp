#include <iostream>

using namespace std;

int main(){

    int n, maior=-1, posi=0;

    for ( int i = 1; i <= 100; i++)
    {
        cin >> n;

        if (n > maior)
        {
            maior = n;
            posi = i;
        }
        
    }
    
    cout << maior << endl;
    cout << posi << endl;

    return 0;

}