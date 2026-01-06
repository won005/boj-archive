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
        sum +=(arr[i]/max)*100;
    }
    cout << (float) (sum /a);
    // 새로운 수들로 평균 구하기
}

//? int 랑 연산하면서