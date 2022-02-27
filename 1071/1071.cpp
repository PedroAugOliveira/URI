#include <iostream>
using namespace std;

int main(){

int x, y, s, i;

s = 0;

cin >> x >> y;

for(i = y + 1; i < x; i++){
    if(i % 2 != 0){
        s = s + i ;
    }
}
cout << s << endl;

return 0;
}
