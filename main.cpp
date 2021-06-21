#include <iostream>
using namespace std;

main(){
    int n, xy=1, a=0;
    cout << "Ingrese el numero entero: ";
    cin >> n;
    while(xy <= n){
        if (n%xy==0){
            a++;
        }
        xy++;
    }
    if (a > 2){
        cout << "no es primo " << endl;
    }
    else {
        cout << " primo " << endl;
    }

}