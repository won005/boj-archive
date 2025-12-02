#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> st;
    vector<char> result;
    int current = 1; // 숫자를 1부터 시작

    for (int i = 0; i< n ; i++){
        int target;
        cin >> target;

        while(current <= target){ //현재 위치의 숫자가 내가 찾고자하는 숫자가 될 때까지..
            st.push(current);
            result.push_back('+');
            current++;
        }

        if(!st.empty() && st.top() == target) //스택 top이 target과 같다면, 즉 target이 맨 끝의 숫자라면
        {
            st.pop();
            result.push_back('-');
        }else{
            cout<<"NO\n";
            return 0;
        }

    }

    // 결과 출력
    for(char c : result) {
        cout << c << '\n';
    }
    
    return 0;

}

//! 추후 복습 필요

