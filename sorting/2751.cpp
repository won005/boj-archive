#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//! 수정렬하기
//* 다만 N 범위가 급 상승
int main(){
    int n; //범위 n < 1,000,000
    cin >> n;
    //시간 제한 2초 = 약 2억번 연산까지

    //  O(N²) 알고리즘 사용시
    //  (n=1000000=1백만)^2 = 1조? = 시간 초과
    //  O(N log N) 알고리즘 필요

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i : arr){
        cout << i<<'\n';
    }
    return 0;
}


//! 백터 크기 지정 필수
//  크기가 0인 벡터로 되기 때문에 런타임 에러 발생한다..