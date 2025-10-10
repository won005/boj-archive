#include <iostream>
using namespace std;

int main() {
    // Raw String Literal 사용 
    cout << R"( ,r'"7
            r`-_ ,' ,/
            \. ". L_r'
            `~\/
            |
            |)" << '\n';
    
    return 0;
}

//? 알아가야할 부분
//  <출력하려는거>  <코드로 작성>
//  백슬래시 \      \\ : 두번 작성해야 1개 출력됨
//  큰따옴표 "      \" : 문자열 끝으로 오해되기 때문에 백슬래시랑 같이 (with 작은따옴표도 동일)
//  탭              \t : Tab
