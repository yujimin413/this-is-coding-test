// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string str;

int main() {

    cin >> str;

    // 문자를 숫자로 바꾸고 싶을 때 해당 문자에 아스키코드 0에 해당하는 문자 빼주기
    long long result = str[0] - '0'; // 첫 번째로 입력받은 숫자 result에 저장

    for (int i = 1; i < str.size(); i++) {
        int num = str[i] - '0'; // i번째 숫자를 num에 저장
        // 두 수 중 하나라도 0 or 1이면 더하기 수행
        if (num <= 1 || result <= 1)
            result += num;
        // 두 수 모두 2 이상이면 곱하기 수
        else    
            result *= num;
    }

    cout << result << '\n';
}