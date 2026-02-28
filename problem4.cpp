#include <iostream>
using namespace std;

void print(int n) {
    if (n == 0)
        return ;

   print(n / 10);
   cout << n % 10 << " ";

}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}
