#include <iostream>
#include <map>
using namespace std;
//! 어렵당...

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> application;
    

    int max, all;
    cin >> max>> all;

    string input[500000];  // 입력 순서 저장
    int count = 0; // 출력한 학생수

    for( int i = 0; i<all;i++){
        cin >> input[i];
        application[input[i]] = i;
    }



    
    for(int i = 0; i<all;i++){

        string studentId = input[i];
        if(application[studentId] == i){
            cout<<studentId <<"\n";
            count ++;

            if(count == max) break;//다 뽑으면 종료
        }

    }
}

/* 더 좋은 풀이
//* vector pair을 이용해서 순서, 학번을 쌍으로 저장

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int k, l;
    cin >> k >> l;
    
    map<string, int> lastClick;  // 학번 → 마지막 클릭 순서
    
    // 입력 받으면서 마지막 위치 기록
    for(int i = 0; i < l; i++){
        string id;
        cin >> id;
        lastClick[id] = i;
    }
    
    // (순서, 학번) 쌍으로 변환
    vector<pair<int, string>> students;
    for(auto& [id, order] : lastClick){
        students.push_back({order, id});
    }
    
    // 순서대로 정렬
    sort(students.begin(), students.end());
    
    // 앞에서 k명 출력
    for(int i = 0; i < min(k, (int)students.size()); i++){
        cout << students[i].second << "\n";
    }
}

*/