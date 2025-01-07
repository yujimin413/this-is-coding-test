#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int n;
string plans;
int x = 1, y = 1;
int main() {
    // L, R, U, D
    int dx[4] = {0, 0, -1, 1}; // 행방향
    int dy[4] = {-1, 1, 0, 0}; // 열방향
    char move_types[4] = {'L', 'R', 'U', 'D'};
    
    cin >> n;
    cin.ignore(); // 입력 버퍼에 남아있는 '\n' 제거
    getline(cin, plans); // 공백으로 문자열 잘라서 배열에 저장

    for (int i = 0; i < plans.size(); i++) {
        int tmp_x = 0, tmp_y = 0;
        for (int j = 0; j < sizeof(move_types); j++) {
            // printf("plans[%d]: %c move_types[%d]: %c\n", i, plans[i], j, move_types[j]);
            if(plans[i] == move_types[j]) {
                // printf("plans[%d]: %c == move_types[%d]: %c\n", i, plans[i], j, move_types[j]);
                // printf("tmp_x: %d, x: %d, dx[%d]: %d\n", tmp_x, x, j, dx[j]);
                // printf("tmp_y: %d, y: %d, dy[%d]: %d\n", tmp_y, y, j, dy[j]);
                tmp_x = x + dx[j];
                tmp_y = y + dy[j];
                break;
            }
        }
        if (tmp_x < 1 || tmp_x > n || tmp_y < 1 || tmp_y > n) {
            continue;
        }
            
        x = tmp_x;
        y = tmp_y;
        // printf("now (%d, %d)\n", x, y);
    }

    cout << x << ' ' << y << '\n'; 
}