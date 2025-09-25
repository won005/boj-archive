#include <iostream>
#include <queue>
using namespace std;

int main() {
    int a;
    cin >> a;
    queue<int> q;
    
    for (int i = 0; i < a; i++) {
        q.push(i + 1);
    }
    
    while (q.size() > 1) {
        cout << q.front() << " "; //이미 여기서 출력을 진행하는 것임
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();  // 마지막 원소, 만약 size() >1 에서 걸러지고 하나가 남았다면 이걸로 출력 
}





// int main() {
//     int a;
//     cin >> a;
//     queue<int> q;
//     queue<int> result;

//     //1. 큐에 집어넣기
//     for (int i = 0; i < a; i++) {
//         q.push(i + 1);
//     }


//     //2. 반복
//     while (!q.empty()) {

//         //2-1. 맨앞 삭제(다른곳에 저장)
//         result.push(q.front());
//         q.pop();

//         if (!q.empty()) { // 만약 q가 홀수일때 이걸 진행하게 되면 컴파일 오류 발생
//             //2-2. 맨앞 뒤로 넘기기
//             q.push(q.front());
//             q.pop();
//         }
//     }

//     while (!result.empty()) {
//         cout << result.front() << " ";
//         result.pop();
//     }
// }