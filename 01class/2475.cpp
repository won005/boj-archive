#include <iostream>
using namespace std;

int main()
{
    int a;
    int result = 0;

    for (int i=0;i<5; i++){ //입력받기
        cin >>a;
        result += (a*a);
    }

    cout << result % 10;
    return 0;
}

//만약에 제곱이 아니라 2^n 이라면 어떻게 구현해야 할까?

//* 1. 비트 시프트 사용 : 
//  <<를 사용한다. 컴퓨터는 내부적으로 모든 숫자를 2진수로 사용하는데
//  2진수에서 숫자를 왼쪽으로 한칸 미는것은 2를 곱하는 것과 같다.
//  ex) 1 (2진수 ...0001)  1<<1 (...0010: 10진수 2)  1<<2 (...0100: 10진수 4).. 1<<n(10진수 2^n)
//  warn : long long 타입을 써서 오버 플로우 방지

//? 사용?
/*
    long long result = 1LL << n;  // 2^n 계산
    LL 이라고 표기하고 << n 이라고 표시할 수 있다. 
    ! 2의 거듭제곱에서만 사용이 가능하다
*/


//* 2. 반복문 -> 비트 시프트보다 속도 느림

//* 3. <cmath> 라이브러리 pow() 함수 사용하기
//  long long result = static_cast<long,long>(pow(2,n));
//  warn : 다만 double(실수)로 연산을 하기 때문에 위 두 방법보다 더 오래걸린다.
