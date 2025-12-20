#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;

    int temp = n-m;
    if(temp <0){
        temp = -temp;
    }
    cout <<temp ;
}