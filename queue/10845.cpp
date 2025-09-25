#include <iostream>
#include <queue>
using namespace std;


int main() {
    int a;
    cin >> a;
    queue<int> result;

    for (int i = 0; i < a; i++) {
        string str;
        cin >> str;
        if ("push" == str) {
            int num;
            cin >> num;
            result.push(num);
        }
        else if ("pop" == str) {
            if (result.empty()) {
                cout << -1 << '\n';
                //break; 여기서 만약에 넣게 되면 for문을 나간다. else를 쓰는게 맞음
            }
            else {
				cout << result.front() << '\n';
                result.pop();
            }
        }
        else if ("size" == str) {
            cout << result.size() << '\n';
        }
        else if ("empty" == str) {
            if (result.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if ("front" == str) {
            if (result.empty()) cout << -1 << '\n';
            else cout << result.front() << '\n';
        }
        else if ("back" == str) {
            if (result.empty()) cout << -1 << '\n';
            else cout << result.back() << '\n';
        }

    }
}

//1. switch 는 string을 못받는다 이럴때는 else if써야함
//2. 문제가 숫자랑 문자열 둘다 동시에 받길래 이걸 어케 해야하나 했는데
//   얘네가 알아서 공백으로 분리해주는걸