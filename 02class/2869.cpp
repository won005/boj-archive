#include <iostream>
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;

    cout << (v - b - 1) / (a - b) + 1;
}

//? 정수에서 올림 계산
//  마지막 날 낮에 정상을 찍으면 끝이고, 미끄러지지 않는다.
//  올림을 사용 : a/b -> (a+b-1) /b
//  밤에 미끄러진 후 위치에서 a 만 더하면 v 이상이 되는 날 구하기
//  n 일차 밤 후 위치 : n *(a-b)
//  n+1 일차 낮에 도달 : n*(a-b) + a >=v