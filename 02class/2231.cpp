#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    int result = 0; // 생성자 없을 때 산출값

    for (int i = 1; i < a; i++)
    {
        int sum = i;  // 현재 숫자 i 저장용
        int temp = i; // 자릿수 계산용

        while (temp > 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }
        if (sum == a)
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}

//? 완전 탐색 사용
// 컴퓨터는 1초에 1억번 정도 계산한다.
// n 범위가 1백만인데, 1부터 1백만까지 대입해서 계산한다해도 연산이 1억번에 비해 낮음 -> 그냥 순회해도 된다는거
// or 정방향으로 풀기는 쉽지만 역방향으로는 어려울 때 완전탐색을 사용한다. 이번이 그 경우

//? 1~n-1의 범위이지만, n-1부터시작하면 값을 더 빨리 찾을 수 있는거 아니야?
// int i = a - 1; i > 0; i--로 for 문을 적었지만 이는 땡
// 문제에서 가장 최솟값..을 찾으라고 했기 때문에 1부터 시작하는게 옳다.
// 문제 잘읽자..
