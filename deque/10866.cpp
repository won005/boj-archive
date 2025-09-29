#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int a;
    cin >> a;
    deque<int> dq;

    for (int i = 0; i< a; i++){
        string str;
        cin>> str;
        if("push_back" == str){
            int b;
            cin >> b;
            dq.push_back(b);
        }else if( "push_front" == str){
            int c;
            cin >> c;
            dq.push_front(c);
        }else if("pop_front" == str){
            if(dq.empty()){
                cout<< -1<<'\n';
            }else{
                cout<<dq[0]<<'\n';
                dq.pop_front();
            }
        }else if("pop_back" == str){
            if(dq.empty()){
                cout << -1 << '\n';
            }else{
                cout<<dq[dq.size()-1]<<'\n';
                dq.pop_back();
            }
        }else if("size"==str){
            cout<<dq.size()<<'\n';
        }else if("empty"==str){
            if(dq.empty()){
                cout<<1<<'\n';
            }else{
                cout<<0<<'\n';
            }
        }else if("front" == str){
            if(dq.empty()){
                cout<<-1<<'\n';
            }else{
                cout << dq[0]<<'\n'; //dq.front() 로 대체 가능
            }
            //begin()과 혼동하지 않기 begin은 반복자에서 사용
        }else if("back"==str){
            if(dq.empty()){
                cout<<-1<<'\n';
            }else{
                cout<<dq[dq.size()-1]<<'\n'; //dq.back() 로 대체 가능
            }
        }
    }

    return 0;
}

//if-else가 이렇게 많은데 시간초과가 안나는게 신기하다.
//if-else는 상수시간이기 때문에 매우 괜찮다. o(1)
//for문에 한번 씌워져 있으니 o(n)이다.