// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int n, k, result;

int main() {
    cin >> n >> k;
    while (true) {
        // N이 K로 나누어 떨어지는 수가 될 때까지 빼기
        int target = (n / k) * k; // k로 나누어 떨어지는 n과 가장 가까운 수를 target에 할당
        result += (n - target); // -1 몇 번 해야하는 지 result에 할당
        n = target;
        // n을 k로 더 이상 나눌 수 없을 때 break
        if (n < k) break;
        n /= k;
        result++;
    }
    // 마지막으로 남은 수에 대해 -1
    result += (n - 1);
    cout << result << '\n';
}