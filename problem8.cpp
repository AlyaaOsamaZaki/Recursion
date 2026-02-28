#include <iostream>
using namespace std;

void pyramid(int n) {
    if (n == 0)
        return;

    for(int i = 0; i < 2*n - 1; i++)
        cout << "*";

    cout << endl;

    pyramid(n - 1);
}
 int main() {
    int n;
    cin >> n;

    pyramid(n);

    return 0;
}
