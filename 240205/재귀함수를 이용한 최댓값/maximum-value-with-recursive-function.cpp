#include <iostream>
using namespace std;

int Max(int n, int *arr, int m) {
    if (n == 0) {
        return m;
    }
    if (*(arr + n - 1) > m) {
        m = *(arr + n - 1);
    }
    return Max(n - 1, arr, m);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 수정: arr[i]로 수정
    }
    cout << Max(n, arr, 1); // 초기 m 값을 1로 전달
    return 0;
}