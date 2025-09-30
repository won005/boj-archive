#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    // 1. 배열에 -1로 채우기
    vector<int> result(26);                 // 백터 크기 설정
    fill(result.begin(), result.end(), -1); // 백터 처음부터 끝까지 -1로 채우기
    string str;
    cin >> str;

    int count = 0;
    // 2. 입력받은 string 순회하며 구분하기
    //  for(char c : str){ //진짜 근데 노가다밖에 없는가..?
    //      count ++;
    //      if('a'==c && result[0] == -1){
    //          result[0] = count;
    //      }else if('b'==c){
    //          result[1] = count;
    //      }else if('c' ==c){
    //          result[2] = count;
    //      }
    //  }
    // 위같은 노가다는 nono

    for (char c : str)
    {
        count ++;
        int index = c - 'a'; //char을 어떻게 연산해요!
        if (result[index] == -1) //-1로 비어있는지 확인
        {
            result[index] = count;
        }
    }

    // 3. 출력
    //  while(!result.empty()){
    //      cout<<result[0]<<" ";
    //      result.erase(); //백터 첫번째 지우기
    //  }
    // 였지만 앞을 지우면 뒤 요소들을 앞당기게 된다.
    // o(n^2) 복잡도를 갖게됨

    for (int pos : result)
    {
        cout << pos << " ";
    }
}

//char을 연산?
    //if-else를 26번 반복하는 대신 char의 아스키코드 값을 이용하면 몇줄로 해결이 가능하다.
    //'a' - 'a' = 0
    //'a' - 'b' = 1
// 백터를 선택한게 맞았을까?
    // array가 성능적으로 조금 더 맞는 선택이다.
    // 둘의 차이는 size가 유동적으로 변할 수 있느냐 없느냐.