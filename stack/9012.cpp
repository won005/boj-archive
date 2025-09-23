#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    vector<int> result(n,0);
    stack<int> st; //인덱스 저장 스택

    for (int i =0; i<n; i++){
        cin >> arr[i]; //입력값을 배열에 저장
    }

    for (int i = n -1; i >=  0; i--){ //역순 i = 4

        while(!st.empty() && arr[st.top()] <= arr[i]){ //[인덱스] < [4]
            st.pop(); 
        }

        if(!st.empty()){
            result[i] = st.top() + 1;
        }

        st.push(i);
    }
    for(int i =0; i<n; i++){
        cout<< result[i]<<" ";
    }
}



/*
int main() {
    
    int n;
    cin >> n; // 박스 개수
    vector<int> arr(n);
    stack<int> result; // 결괏값

    // 1단계: 배열에 값 입력받기
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 2단계 : 뒤에서부터 왼큰수 찾기
    // 2-1. 배열 전부 순회
    for (int i = n; i > 0; i--) { 
        int nge = 0; // 오큰수 초기값 해당되는게 없다면 0 출력

        // 2-2. 선택한 칸에서 수를 찾으며 값 출력 
        for (int j = i - 1; j > 0; j--) { 
            if (arr[i - 1] < arr[j - 1]) { 
                nge = j;
                break; //안쪽 for문 완료
            }
        }
        result.push(nge);
    }


    // 3. 결과 출력
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}

// 배열은 개수 설정이 불가능하지만
// 벡터는 개수 설정이 가능하다.

// 스택을 빼낼 때는 size() &for문을 사용하는 것 보다
// while & empty()를 사용하는 게 더 안전하다.
*/