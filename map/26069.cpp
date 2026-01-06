#include <iostream>
#include <map>
using namespace std;

int main(){
    int a;
    cin >> a;
    map<string, bool> dance;
    dance["ChongChong"] = true; // 총총은 감염자
    
    for(int i = 0; i < a; i++){
        string x, y;
        cin >> x >> y;
        
        // 둘 중 하나라도 감염되었으면
        if(dance[x] || dance[y]){
            dance[x] = true;  
            dance[y] = true;
        }
    }
    

    int count = 0;
    for(auto& p : dance){ //true(감염자)만 세기
        if(p.second) count++;
    }
    
    cout << count;
}
//? insert 사용?
//  key 값이 있다면 무시된다.
//  m.insert({"alice", false});  // alice: false 저장됨
//  m.insert({"alice", true});   // 무시됨! (이미 alice가 있으니까) 
// insert 를 사용해서 약간 꼬였었음