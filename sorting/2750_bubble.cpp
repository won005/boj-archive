#include <iostream>
using namespace std;
//! 오름차순 구현
//! 버블 정렬

int main()
{
    int n, arr[1000]; // n 개수제한이 1000이라 괜찮
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // 배열에 하나씩 집어넣기

    //*버블 정렬
    for (int i = 0; i < n - 1; i++)
    { // n-1 번 반복 (맨 마지막은 자동으로 정렬되서 생략가능)
        for (int j = 0; j < (n - 1) - i; j++)
        { // 매번 끝에서 i 개는 정렬 완료

            if (arr[j] > arr[j + 1])
            {
                // 옆에 있는 수와 비교해서 앞에 있는 수가 크다면
                // 위치를 전환한다
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
}

//? 버블 정렬 원리
//  인접한 두 원소를 비교해서 큰걸 뒤로 보내기
//  반복하면 큰값이 뒤로 버블처럼 떠오른다