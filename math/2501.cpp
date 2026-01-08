#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int count = 0;
    int temp = 0;

    if(a%b !=0){
        cout<<0;
    }else{
        for(int i = 1;i < a+1;i++){
        temp = a%i;
        if(temp == 0){
            count ++;
        }
        if(count == b){
            cout << i ;
            break;
        }
    }
    }
    
}