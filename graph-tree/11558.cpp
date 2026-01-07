#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    int arr[10000];

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // 인원 넣기
        }

        // 지목한 곳 이동
        int current = 1;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            // 다음 노드로 이동
            current = arr[current - 1];
            count++;

            if (current == n)
            {
                // 출력
                cout << count<<"\n";
                break;
            }
        }

        if (current != n)
        {
            cout << 0 << "\n";
        }
        // 0알때를 판단하는 법..
    }
}

//? 테스트 케이스??
//  이 게임을 몇 번 반복할 것인지

//? 노드와 노드가 가리키는 방향값을 잘 구분해야함.
//  current 정의할 때 current = arr[0] 라는건.. 1번 노드가 아니라 1번 노드가 가리키는 값을 뜻함.
//  따라서 current = 1로 1부터 시작하게끔 하기

