#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int k,n;
        cin >> k >> n;

        //층 , 호
        int dp[15][15] = {0};

        //0층 초기화
        for(int j= 1;j<n; j++){
            dp[0][j]= j;
        }

        //1호 초기화 = 1호 무조건 1명
        for(int j=1;j<= k; j++){
            dp[j][1] = 1; //주의 1호부터 시작

        }

        //다른 방들 값 채워나가기
        for(int floor = 1;floor<= k;floor ++){ //0층은 초기화 했으니 1층부터
            for(int room =2; room <=n;room ++){ //1호는 무조건 1이니 2부터
                dp[floor][room] = dp[floor][room-1] + dp[floor-1][room];                
            }
        }

        cout<<dp[k][n]<<'\n';
    }
    return 0;
}

//? 패턴 파악
//  dp[층][호] = dp[층][호-1] + dp[층-1][호]
//  표를 그려봐야 알음 (근데 풀어그려서 몰랐다.)

//? 1호는 항상 1

//! 점화식
//  이전 값들을 이용해서 다음 값들을 구하는 식

