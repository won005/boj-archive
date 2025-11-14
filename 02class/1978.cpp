#include <iostream>
#include <math.h>
using namespace std;

// 소수 찾기
int main()
{
    int a;
    cin >> a;
    int count = 0;

    //bool isPrime=true;
    //여기에 두면 각 숫자마다 초기화가 안되고 계속 이어짐
    

    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        if (b == 2)
        {
            count++;
            continue; //컨티뉴를 사용해서 아래 코드 사용 x
        }
        else if (b == 1) {
            continue;
        }
        else
        {
            bool isPrime = true;
            for (int i = 2; i <= sqrt(b); i++)
            {
                if (b % i == 0) // 소수x
                {
                    isPrime = false;
                    break; 
                }
            }
            if (isPrime == true) {
                count++;
            }
        }
    }
	cout << count;
}

//! 변수 휘발 여부 잘 생각하기

//? 소수 찾기
//1 에라토스테네스의 접근
//  
//2 기본 방법
//  2~n-1까지 모두 검사하는 방법이 있다.
//3 시행 착오법 (소수판별법)
//  2~ √N 까지 확인하는 방법

//? 시간복잡도
//o(a√N)

//? 블로그를 너무 믿지 말자..