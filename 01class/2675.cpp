#include <iostream>
#include <queue>
using namespace std; 

// 문자열 반복
int main(){
    int a;
    cin >> a;
    queue<char> list;
    for (int i = 0; i<a;i++){//맨 첫줄 횟수만큼 반복
        int b;
        string str;
        cin >> b >> str; //반복 횟수랑 반복할 문자 작성

        for(char c: str){ // 큐에 char 단위로 넣기
            list.push(c);
        }

        while(!list.empty()){ //리스트가 빌 때까지

            for(int j = 0; j <b; j++) cout<<list.front();
            list.pop();
        }
        cout<<'\n';
    }
}

//? queue를 쓰는게 최선의 방법인가?
//  선입선출 때문에 사용하게 됬는데 최선이 아니였다.
//  queue가 필요한 경우는 순서가 뒤죽박죽인 경우, 즉시 처리를 하면 안되는 경우
//  이지만, 이번 경우는 문자열로 위치가 고정되어있었다. 순서가 확정된 상태.

//  따라서 기본형 으로

/*
int a;
cin >> a;

for (int i =0; i< a; i++){
    int b;
    string str;
    cin >> b >> str;

    *각 문자를 바로 출력
    for (char c : str){
        for(int j = 0; j< b; j++){
            cout<<c; //반복 출력
        }
    }
    cout<< '\n'; //텍스트가 끝나면 다음줄로 이동
}
    기본형으로 생각해냄 ㅎㅎ
*/ 