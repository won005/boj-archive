#include <iostream>
using namespace std;

int main(){
    long n,m;
    cin >> n>>m;

    long temp = n-m;
    if(temp <0){
        temp = -temp;
    }
    cout <<temp ;
}