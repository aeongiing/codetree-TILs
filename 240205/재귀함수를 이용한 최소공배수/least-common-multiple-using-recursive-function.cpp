#include <iostream>
using namespace std;

// 최대공약수를 구하는 함수
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

// 주어진 수들의 최소공배수를 재귀적으로 구하는 함수
int LCM(int n, int *arr) {
    if (n == 1)
        return arr[0];
    return lcm(arr[n-1], LCM(n-1, arr));
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << LCM(n, arr) << endl;

    return 0;
}