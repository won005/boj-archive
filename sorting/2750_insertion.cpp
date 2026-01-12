#include <iostream>
using namespace std;
//! 오름차순
//! 삽입 정렬
int main(){
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    //* 삽입 정렬
    for(int i = 1; i<n;i++){
        int key = arr[i]; // 삽입할 값(손에 들어낸 값과 같음)
        // i 가 커지면서 손에 든 값이 뒤로 한칸씩  

        int j = i-1; // 키값의 이전값

        while(j >= 0 && arr[j]>key){ //j 의 값이 key값보다 클때
            arr[j+1] = arr[j]; //j (기준) 한칸씩 뒤로가기
            // 
            j--;
        }

        arr[j+1] = key;//삽입
    }

    for(int i = 0; i < n; i++) cout << arr[i] << '\n';
}


//? 삽입 정렬
//  카드 정렬하듯이 하나씩 골라 꺼내서 올바른 위치에 삽입하기
