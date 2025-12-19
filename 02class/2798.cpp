#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // 중복방지
        {
            for (int k = j + 1; k < n; k++)
            {
                int temp = arr[i] + arr[k] + arr[j];
                if (result < temp && m >= temp)
                    result = temp;
            }
        }
    }

    cout << result;
    return 0;
}

//? 2231번과 같이 완전 탐색을 이용할 수 있었다.
// 일단 순회하고 숫자가 적었다. 그냥 여러 경우의 수를 전부 더해보고 판단해도 될 것 같았음
// 그래서 삼중 for문으로 모든 경우 순회

//? for문에서 i+1, j+1하는 이유
// 확통할때도 5,6 6,5 중복되는 가짓수로 판명하기 때문