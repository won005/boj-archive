#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);//

    long long N;
    cin >> N;

    // 1번 방은 예외적으로 1층
    if (N == 1) {
        cout << 1;
        return 0;
    }

    long long layer = 1;    // 현재 층 (결과값)
    long long max_num = 1;  // 현재 층까지의 최대 방 번호

    // N이 현재 층의 최대 번호보다 크다면 다음 층으로 이동
    while (N > max_num) {
        max_num += (6 * layer);
        layer++;
    }

    cout << layer;

    return 0;
}