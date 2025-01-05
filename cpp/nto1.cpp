#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K, cnt = 0;
    scanf("%d %d", &N, &K);
    // printf("%d %d\n", N, K);

    while (N != 1) {
        if (N % K == 0) {
            N /= K;
            cnt++;
        }
        else {
            N -= 1;
            cnt++;
        }
    }
    printf("%d\n", cnt);
}