#include <iostream>
using namespace std;

//! 카운팅 정렬
int main(){

    //빠른 입출력 유도
    // C 표준 스트림 버퍼와 동기화를 끊기
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a;
    cin >> a;

    int count[10001] = {0}; // 1~10000범위 (0포함해서) 총 10001개의 칸 수
    //다만 0번째 칸은 범위상 사용하지 않음

    
    for(int i = 0; i<a; i++){
        int b;
        cin >> b;
        count[b]++;
    }

    for( int i =1; i<10001;i++){
        //if 문을 쓸까 했지만, 중복 숫자는 중복된 만큼 나와야하기에 for문을 사용해야한다.
        for(int j = 0; j < count[i];j++){ //중복된 개수 = count[i]
            cout<<i<<'\n'; // 출력할 대상 숫자 = i
        }
    }
    

    
}

//? sort 함수 이용 -> 문제가 간단히 풀리지만 원초적인 방법을 구현할 능력을 가지기 위해 포기
//  근데 찾아보니 sort를 사용하면 런타임 에러가 난다고 한다.

//? 카운팅 정렬 사용!!
//  문제 : N<= 10,000,000 수 정렬, 수 범위는 1~10,000, 메모리 제한 : 8MB
//* 위 정렬은 문제가 몇 번 나왔는지 세는 정렬이다.
//  1이 몇개, 2가 몇개, 3가 몇개 나왔는지 세어보고, 그대로 개수만큼 차례대로 출력하는거임