#include <iostream>
using namespace std;

int main(){
    //Sematik:
    // x = 10
    // y = 5
    //x = y

    //Sintaks
    int x = 10;
    int y = 5;
    x = y;

    cout<<x<<endl;
    //maka nilai yang keluar adalah 5

    //Contoh Penerapan
    int a = 5;
    int b = 6;
    int c = 9;

    a = a - b;
    b = b + c;
    c = c * b;
    a = a + b;

    cout<<a<<" "<<b<<" "<<c<<endl;

    //maka hasil yang keluar adalah 14 15 135
    //Penjelasan
    // a = 5 - 6 = -1
    // b = 6 + 9 = 15
    // c = 9 x 15 = 135
    // a = -1 + 15 = 14

    return 0;
}