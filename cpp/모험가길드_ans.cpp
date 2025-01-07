#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int n;
vector<int> arr;
int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end()); // 오름차순 정렬

    int result = 0, cnt = 0;
    for (int i = 0; i < n; i++) { 
        cnt += 1;   // 현재 그룹에 모험가 추가
        if (cnt >= arr[i]) {    // 현재 그룹에 포함된 모험가 수가 현재 공포도 이상이면 그룹 마감
            result++;   // 그룹 수 +1
            cnt = 0; // cnt 초기화
        }
    }
    cout << result << '\n';
}