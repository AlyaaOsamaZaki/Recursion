#include <iostream>
using namespace std;

void pyramid(int n) {
    if (n == 0)
        return;

    pyramid(n - 1);
    for(int i = 0; i < 2*n - 1; i++)
        cout << "*";

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    pyramid(n);

    return 0;
}
