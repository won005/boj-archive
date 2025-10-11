#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int list[10] = { 0 }; //0~9까지.. 0으로 디폴트값

    int main = a * b * c;
    int temp = 0;

    while (true) {

        temp = main % 10;//첫자릿수
        list[temp]++; //첫자릿수가 2라면 [2]칸에 수를 +1
        if (main == temp) {
            break;
        }
        main = (main - temp) / 10;//메인수를 첫자리수를 없앤 수로 갱신

    }

    for (int i : list) {
        cout << i << '\n';
    }
}
//! 디버깅 -> f10 누르면서 전진 / f5는 결과 바로보기

//? 이게 최선의 코드인가? 피드백
//  1. 변수명을 main으로 해버린 점,, : 들었었는데 막상 하다가 까먹었음
//* 2. 종료 조건이 비효율적이고 불명확하다. if(main == temp)
//  3. (main - temp) / 10 이거나, main / 10나 다를바가 없다..

//? 개선 코드
/*
int num = a * b * c;
while (num > 0){  -->> num이 0이 될 때 while문을 그만두는 거 (num=0은 몫이 0 될때)
    list[num % 10]++
    num /= 10;
}
*/