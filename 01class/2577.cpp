#include <iostream>
#include <string>
using namespace std;

//* 숫자를 나눗셈을 통해 순회해서 개수 세기
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

//? 개선 코드
/*
int num = a * b * c;
while (num > 0){  -->> num이 0이 될 때 while문을 그만두는 거 (num=0은 몫이 0 될때)
    list[num % 10]++
    num /= 10;
}
*/