#include <iostream>
using namespace std;

int main() {
    int L;
    string str;
    cin >> L >> str;
    
    long long r = 1;  // 31의 거듭제곱 의 시작 31^0
    long long M = 1234567891;
    //? r과 M 은 문제에서 주어짐

    long long result = 0;
    
    for (int i = 0; i < L; i++) { //문자열만큼 반복
        //str[0] = str의 첫 문자
        //str - 'a'하는 방법은 0부터 시작하는 숫자로 반환을 한다.
        //다만 문제서 번호가 1부터 시작이기 때문에 +1 가미
        int a = str[i] - 'a' + 1; // a의 아스키 코드를 사용해서 문자를 숫자로 변환
        // i 는 a,b,c.. int 값과 계산을 하면 int 로 산출 

        //첫번째 문자를 숫자로 바꿧따.


        //해시값 누적 계산
        result = (result + (a * r) % M) % M;
        // result 가 하나 붙어있기 때문에 "누적"

        //항상 M 이하를 유지하기 위해 M을 또 나누기
        r = (r * 31) % M;  // 다음 거듭제곱 미리 계산
    }
    
    cout << result << '\n';
    
    return 0;
}

//! 해시 
//  r은 거듭제곱할 값, M 은 해시테이블 크기
//* H = (a₀×r⁰ + a₁×r¹ + a₂×r² + ... + aₙ₋₁×rⁿ⁻¹) mod M

//? mod M은 뭐야
//  해시값이 배열 인덱스이기 때문에 범위를 제한해야함 (0~M-1)
//  M 이 소수면 균등하게 분포되는 것이 보장된다.
//* hash % M  =  mod M

//? 왜 mod 를 두번하는거지?
//  (A + B) mod M = ((A mod M) + (B mod M)) mod M 이용