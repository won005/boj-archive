#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> list;//set 자료구조 이용
    for(int i = 0; i< 10; i++){
        int a;
        cin >> a;
        int temp = a%42;
        list.insert(temp);
    }

    cout<<list.size();

}


/*
? set  / unordered_set 자료구조
    set<int> s;

    // 삽입
    s.insert(10);

    // 삭제
    s.erase(10);

    // 검색 (있는지 확인)
    if(s.find(10) != s.end()) {
        cout << "있음!";
    }

    // 개수 확인 (0 또는 1만 반환)
    if(s.count(10)) {
        cout << "있음!";
    }

    // 크기
    cout << s.size();

    // 비우기
    s.clear();

unordered_set은 순서 보장이 안되지만 더 빠른 자료구조이다.
삽입 검색 삭제가 O(1)로 수행되기 때문에 안정성은 떨어져도 사용되고 있다.

반면 set은 삽입 검색 삭제가 O(n)이다.


이유는 set은 레드블랙트리, unordered_set은 해시테이블로 구현되었다고한다.



? unordered_set가 최선인가?
    놀랍게도 아님. bool 배열이 가장 효율적이라고 한다. 속도 때문에. 메모리면에서도 배열이 우세함.

? bool 배열이 뭐야?
    걍 배열에 bool 값이 들어간거임.
    bool visited[42] = {false}; // 디폴트는 false로 만들고
    (나머지 종류는 총 0~41 42개임)

    나머지 3이 나왔을 때 4번째 인덱스의 값을 true로 바꾸는 식

    배열은 계산 없이 즉시 접근이 가능하지만 unordered_set은 해시 기반이라 해시함수 계산이 필요하다.

!    범위가 작으면 배열, 속도만 중요하다면 unordered_set을 사용
*/