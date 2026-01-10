#include <iostream>
using namespace std;

//! 최대 공약수
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

//! 최소 공배수
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}


int main(){
    int a, b;
    cin >> a >>b;

    cout << gcd(a,b)<<'\n';
    cout << lcm(a,b)<<'\n';
    return 0;
       
    
}


//? 유클리드 호제법
// 큰수를 작은수로 나눈 나머지, 작은수의 최대공약수는 원래 두 수의 최대 공약수와 같음
//  b가 0이 될때까지 반복할 시 a 가 바로 최대 공약수

//  24%18 = 6 -> 18,6도 나눌 수 있다.

/*
gcd(24,18)
gcd(18,6)
gcd(6,0)
b = 0이되는 순간 반복을 멈추기 = 그때 작은수가 최대공약수
*/


//** */  lcm 푸는법 최소공배수 * 최대공약수 = 두 수의 곱
//  최소공배수 = 두수곱/최대공약수