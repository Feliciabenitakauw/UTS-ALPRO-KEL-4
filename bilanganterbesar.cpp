#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "masukkan tiga bilangan: ";
    cin >> a >> b >> c;
    int terbesar = a;
    if (b > terbesar) {
        terbesar = b;
    }
    if (c> terbesar) {
    terbesar = c;
    }
    cout << "bilangan terbesar adalah: " << terbesar << endl;
    return 0;
}