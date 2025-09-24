#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        
        stack<char> s;
        
        for(char c : str){
            if(!s.empty() && s.top() == c){
                s.pop();  // 같으면 제거
            } else {
                s.push(c);  // 다르면 추가
            }
        }
        
        if(s.empty()){  // 스택이 비어있으면 좋은 단어
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}
// 1. 너무 복잡하게 생각했다. "좋은 단어"의 정의를 조금 더 고민해봣어도 됐었다.
// 2. 가능한 예시들을 전부 나열해서 정리하기 (반대가 적다면 반대를 정리)
// 3. 약간 구슬게임 같은거였음...


//// 시행착오 버전
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int a;    
//     int result,count =0;
//     stack<char> s;

//     cin >>a;
//     for(int i = 0; i<a; i++){
//         string str;
//         bool isRight = true;

//         cin>>str;
//         for(char c: str){
//             s.push(c);
//         }

//         //1. 스택 개수 짝수
//         if( s.size()%2 == 1){
//             isRight = false;
//             break;
//         }
        
        
//         while(isRight == true ){
//             //2. 맨처음 = 2번째/ 맨처음 != 2번째
//             char top = s.top();
//             s.pop();
//             char second = s.top();
//             if(top == second){//맨처음 = 2번째
//                 isRight = true;

//             }else{ // 가 아닐 때는
//                 char second =s.top();
//                 s.pop();
//                 char third = s.top();

//                 if(second == third){ // 무조건 2번째 3번째가 같아야함
//                     isRight =true;
//                 }else{
//                     isRight = false;
//                     break;
//                 }
//             }
//         }
//         cout << count;

//     }
    
//     return 0;
// }