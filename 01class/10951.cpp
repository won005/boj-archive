#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while (true) //선 입력 후 검사
    {
        cin >> a >> b;
        if(cin.eof()){
            break;
        }
        cout << a + b << "\n";
    }
}

// 쉬워서 안적을라 했는데, 입력의 제한이 없는것을 보고 뭔가 디테일을 느꼈다.

// 입력에서 데이터 읽을 것이 없을 때 프로그램이 스스로 종료해야한다. 이걸 End-Of-File 처리라고 함.