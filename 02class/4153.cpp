#include <iostream>
using namespace std;

int main(){
    while(true){
        int a,b,c;
        cin >>a>>b>>c;
        cout<<'\n';
        if(a==0 && b==0 && c==0){
            break;
        }
        if(a*a+b*b ==c*c){
            cout<<"right"<<'\n';
        }else{
            cout<<"wrong"<<'\n';
        }
    }
    return 0;
}