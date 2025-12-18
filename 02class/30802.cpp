#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> vec(6); // 사이즈는 6종류로 고정
    for(int i = 0; i < 6; i++) {
        cin >> vec[i];
    }

    int t, p;
    cin >> t >> p;

    int tMain = 0; 
    for(int i = 0; i < 6; i++) {
        // T셔츠 묶음 계산
        if (vec[i] == 0) continue; 
        tMain += (vec[i] - 1) / t + 1; //?나눗셈의 올림
    }

    // 펜 묶음 계산
    int pMain = num / p;
    int pSub = num % p;

    cout << tMain << "\n";
    cout << pMain << " " << pSub << endl;

    return 0;
}

//? 나눗셈의 올림이 뭐야
// 처음에 vec[i]/티셔츠묶음 + 1 으로 작성했는데, 이러면 티셔츠 묶음 배수일때 +1가되는 문제가 발쌩함
// ex) vec[i] = 5 티셔츠묶음 5 기준이라 하면, 5개를 5개로 묶으니 값이 1이 나와야하는데, 2가 나와버림
// vec의 값을 그래서 하나 빼주고 나눠서 오류를 방지