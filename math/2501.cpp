#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int count = 0;
    int result = 0; //처음부터 0으로 시작

    for(int i = 1; i<=a; i++){
        if(a%i == 0){
            count++;
            if(count == b){
                result = i;
                break;
            }
        }
    }
    cout << result;
    return 0;
    
}