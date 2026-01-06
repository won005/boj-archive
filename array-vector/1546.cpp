#include <iostream>
using namespace std;

int main(){
    int a;
    float max =0;
    
    cin >> a;
    float arr[a];
    //3개 수 받아서
    for(int i = 0; i<a;i++){
        int b;
        cin >> b;
        if(b> max){
            max = b;
        }
        arr[i] = b;
    }
    float sum=0;
    for(int i = 0; i <a; i++){
        sum +=((double)arr[i]/max)*100;
    }
    cout << sum /a;
    // 새로운 수들로 평균 구하기
}

//? float 이 하나라도 있다면 float으로 값이 나온다. (double 동일)
//  그래서 마지막 결괏값을 cout 하는 순간이 아니라
//  sum 을 산출 할 때 캐스팅하는 순간이 중요

//? float 은 f 붙임. cpp 에서 실수는 기본적으로 double