#include <iostream>
#include <stack>
#include <vector>
using namespace std;


//! 보류 !
int main(){
    //8개수를 나열 입력
    int a;
    cin >> a;
    int target=0;
    stack<int> s;

    for(int k =0; k < a;k++){
        s.push(k+1); //[1,2,3,4..]
    }

    for (int i =0; i<a;i++){
        int b;
        cin >>b; 

        if(b == s.top()){
            for(int j = 0; j<s.size(); j++){
                cout<<"-"<<'\n';
            }
        }else if(s.top() > b){
            while(s.top()==b){
                cout<<"-"<<'\n';
                s.pop();
            }
        }else if(s.top() <b){
            while(s.top()==b){
                cout<<"+"<<'\n';
            }
        }


    }
    


    //
    //불가능한 때?
}

