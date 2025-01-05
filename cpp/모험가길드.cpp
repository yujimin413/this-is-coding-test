#include <iostream>
#include <string>

using namespace std;

int n;
int str[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        str[i] = tmp;
    }

    // 오름차순 정렬
    for (int i = 0; i < n - 1 ; i++) {
        for (int j = i + 1; j < n ; j++) {
            if (str[i] > str[j]) {
                int tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
    printf("%s\n", str);

    int group[100];
    int groupnum = 0;
    for (int i = 0; str[i] <= n - i; i++) {
        // printf("str[%d]: %d, group[%d]: %d\n", i, str[i], groupnum, group[groupnum]);
        if (str[i] > group[groupnum])
            group[groupnum]++;
        else
            group[++groupnum]++;
    }
    cout << groupnum + 1;
}