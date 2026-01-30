#include <iostream>
#include <stack>
using namespace std;

int main()
{

    while (1)
    {
        string a;
        string result="";
        cin >> a;

        if (a == "0") break;
        stack<int> s;

        for(char i : a){
            s.push(i);
        }

        while(!s.empty()){
            result += s.top(); //스택 위 숫자 복붙
            s.pop(); //빼내기
        }
        
        if(result == a){
            cout << "yes"<<"\n";
        }else{
            cout << "no"<<"\n";
        }

    }
}

//? queue pop 은 반환값이 없다
//  stack도 pop 은 반환 값이 없다. 
//  둘다 front, top 을 각각 호출해야함.

//? 다른 방법
//* reverse 사용
//  <algorithm> 에서 reverse(rev.begin(), rev.end()); 이렇게 사용 가능
//  rev 변수가 리버스 됨

//* 양쪽 끝 검사
/*
  int main() {
      string a;
      while (cin >> a && a != "0") {
          bool ok = true;
          for (int i = 0; i < a.size() / 2; i++) {
              if (a[i] != a[a.size() - 1 - i]) {
                  ok = false;
                  break;
              }
          }
          cout << (ok ? "yes" : "no") << "\n";
      }*/