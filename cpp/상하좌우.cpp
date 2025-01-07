#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>


using namespace std;

int n;
string plan;

int main() {
    // 동북서남
    int dx[4] = {0, -1, 0, 1}; // 행방향
    int dy[4] = {1, 0, -1, 0}; // 열방향

    int n;
    cin >> n;
    cin.ignore(); // 입력 버퍼에 남아있는 '\n' 제거
    getline(cin, plan); // 공백으로 문자열 잘라서 배열에 저장

    // 배열 필요 없음
    // int arr[n][n];

    // for (int i = 0; i < n; i++) 
    //     for (int j; j < n; j++)
    //         arr[i][j] = 0;

    // for (int i = 0; i < n; i++) {
    //     char tmp;
    //     cin >> tmp;
    //     plan.push_back(tmp);
    // }

    int x = 0, y = 0;
    for (int i = 0; i < plan.size(); i++) {
        switch(plan[i]) {
            case 'R' :
                if ((x + dx[0] >= 0) && (x + dx[0] < n) && (y + dy[0] >= 0) && (y + dy[0] < n)) {
                    x += dx[0];
                    y += dy[0];
                }
                break;
            case 'L' :
                if ((x + dx[2] >= 0) && (x + dx[2] < n) && (y + dy[2] >= 0) && (y + dy[2] < n)) {
                    x += dx[2];
                    y += dy[2];
                }
                break;
            case 'U' :
                if ((x + dx[1] >= 0) && (x + dx[1] < n) && (y + dy[1] >= 0) && (y + dy[1] < n)) {
                    x += dx[1];
                    y += dy[1];
                }
                break;
            case 'D' :
                if ((x + dx[3] >= 0) && (x + dx[3] < n) && (y + dy[3] >= 0) && (y + dy[3] < n)) {
                    x += dx[3];
                    y += dy[3];
                }
                break;
        }

    }
    cout << x + 1 << ' ' << y + 1 << '\n';
}