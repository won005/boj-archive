#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
    for(int i = 0; i < a; i++){
        stack<char> s; 
        string str; //문자열 입력받기
        cin >> str;

        bool isValid = true; // yes/no 판단
        
        for(char c : str){ //문자열 -> 문자형으로 분리해서 검증
            if(c == '('){
                s.push('(');  // 실제 문자 저장
            }
            else if(c == ')'){
                if(s.empty()){
                    isValid = false;
                    break;  // )가 (보다 더 많이 나오는 즉시 false break
                }
                s.pop();  // 매칭되는 '(' 제거
            }
        }
        
        // 결과 
        // true여야하고, 스택이 비어있어야한다(매칭이 되어서)
        if(isValid && s.empty()){
            cout << "YES\n";
        }else{ //예외
            cout << "NO\n";
        }
    }
    
    return 0;
}

// 플래그 변수를 이용하여 yes,no 여부를 판단한다.
// for문 순회를 이용하면 string으로 값을 받아서 char형으로 분리할 수 있다.