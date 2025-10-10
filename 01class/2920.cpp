#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "";
    for(int i = 0; i < 8; i++) {
        int n;
        cin >> n;
        s += to_string(n);
    }
    
    if(s == "12345678") cout << "ascending";
    else if(s == "87654321") cout << "descending";
    else cout << "mixed";
}

//? 다른 방법은 뭐가 있을까?
//*1.배열 + 단순 비교
/*
int arr[8] //배열 8칸
for(8번){   //배열에 내가 입력한 수 집어넣기
    cin >>arr[i];
}

bool asc = true, desc = true;
for (8번){ //i 가 0~7까지 순회하면서 배열과 조건이 일치하는지 if로 확인
    if(arr[i] != i + 1) asc = false;
    if(arr[i] != 8 - i) desc = false;
}

if(asc) cout << "ascending" ...... //asc 이 true라면 출력

*/

//*2.문자열 입력받기
/*
string s ="";
for(8번){
    int n;
    cin >> n;
    s += to_string(n); //? to_string은 숫자 -> 문자열 함수이다.
}
if(s == "12345678") cout << "ascending"....
*/


//*3.차이값으로 판단 <<< 제일 적합
/*
int arr[8];
for(8번){
    cin >> arr[i];
}

int diff = arr[1]-arr[0]; // 차이 결정 : 여기서는 1
! 이미 인덱스 0,1부터 차이가 결정되는 거
bool valid = true; //패턴이 깨지는지 안깨지는지 확인

for(8번){
    if(arr[i] - arr[i -1] != diff){ // 패턴이 차이(1)과 다를 때
        vaild = false; //패턴 깨졌어요ㅠㅠ
        break;    
    }
}

if(valid && diff ==1 ) cout << "ascending";
if(valid && diff ==-1 ) cout << "descending";
*/

//* 12345.. 차이가 계속 +1 이거나 8765.. -1 이거나 한다.
//* 만약 mixed라면 차이가 +-1일 수가 없다. 그걸 이용한 것
//* 본 코드가 가장 좋은 코드인 이유는 1,3,4..라면 3,4사이에서 패턴이 이미 깨졋기 때문에 break로 나오는 것이 가능하다.
//* 응용에도 용이하다.


//? if("1 2 3..8"==a) 문자열 비교하면 왜 틀릴까?
//  문자열 비교 자체는 틀리지 않았는데 내가 빼먹은 부분이 있음.
//! 작성하는 것은 1 2 3 4.. 이지만 프로그램은 12345..이런식으로 띄어쓰기는 버리고 해석한다.



//* 이런 기발한 방법으로 코드를 작성하는게 멀리 느껴지면서도 너무 신기하다.. 이런 패턴은 어떻게 찾아내는거지?