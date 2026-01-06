#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n>>m;

    vector<long long> cards(n);

    //제일 작은 수 2개 고르기
    //합치고 갱신하기
    for(int i = 0; i<n;i++){
        cin >> cards[i];
    }

    for(int i = 0; i<m;i++){
        sort(cards.begin(), cards.end());
        long long temp = cards[0] + cards[1];
        cards[0]= temp;
        cards[1] =temp;
    }

    long long result=0;
    for(long long i : cards){
        result += i;
    }
    cout << result;
}

//? sort 이용이 아닌 우선순위 큐 사용
//  정렬을 필요한 부분만 진행하는 우선순위 큐가 더 나음

