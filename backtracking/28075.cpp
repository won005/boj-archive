#include <iostream>
using namespace std;
int n, m;
//! dfs 복습 필요

int result = 0;
int value[2][3];

void dfs(int day, int prevPlace, int total)
{
    if (day == n)
    {
        if (total >= m)
            result++;
        return;
    }

    for (int task = 0; task < 2; task++)
    {
        for (int place = 0; place < 3; place++)
        {
            int score = value[task][place];
            
            // 전날과 같은 장소면 절반
            if (day > 0 && prevPlace == place)
                score /= 2;
            
            dfs(day + 1, place, total + score);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> value[i][j];
        }
    }
    
    dfs(0, -1, 0);
    cout << result << '\n';
    return 0;
}