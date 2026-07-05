#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stek;

    // Dodavanje elemenata
    stek.push(10);
    stek.push(20);
    stek.push(30);

    cout << "Element na vrhu steka: " << stek.top() << endl;

    // Uklanjanje elementa sa vrha
    stek.pop();

    cout << "Nakon uklanjanja jednog elementa:" << endl;
    cout << "Novi vrh steka: " << stek.top() << endl;

    return 0;
}
