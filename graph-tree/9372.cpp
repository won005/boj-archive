#include <iostream>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m;
    cin >> t;
    for(int i = 0;i <t; i++){
        cin >> n >> m;

        for(int j =0; j <m; j++){
            int a, b;
            cin >> a >> b;
        }
        cout<<n-1<<"\n";
        //! 허무하지만 내용 중요

    }
}

//? 최소 신장 트리 (MST)
//  n개 국가 모두 연결
//  사이클 없다

//  비행 스케쥴은 항상 연결 그래프를 이룬다 = 고립된 국가 x , 어떤 국가든 다른 국가로 갈 수 있다.
//  모든 국가를 최소한으로 연결한다

//  모든 node 가 연결된다.
//  mst의 조건은 간선의 개수가 node- 1 개이다..;;