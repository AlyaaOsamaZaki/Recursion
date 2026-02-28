#include <iostream>
using namespace std;

void solve(int arr[], int n, int i) {
    if (i >= n)
        return;

    solve(arr, n, i + 2);
    cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr, n, 0);

    return 0;
}
