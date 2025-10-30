#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(true){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr,arr+3);

        if(arr[0]==0&&arr[1]==0&&arr[2]==0){
            break;
        }
        
        if(arr[2]*arr[2] == arr[1]*arr[1]+arr[0]*arr[0]){
            cout<<"right"<<'\n';
        }else{
            cout<<"wrong"<<'\n';
        }
    }
}
//? 3 4 5 든 5 4 3 이든 순서에 상관 없이 right이 나와야한다.
//  즉 abc 중에서 가장 큰수를 찾아야 한다.
//  가장 큰 수를 어떻게 효율적으로 구할 수 있을까?
//! 배열 sort로 요소 정렬을 생각
/* 기존 코드

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (a * a + b * b == c * c) {
            cout << "right" << '\n';
        }
        else {
            cout << "wrong" << '\n';
        }
    }
    return 0;
}

*/