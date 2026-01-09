#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t;i++){
        int h,w,n;
        cin >> h>>w>>n;
        int count = 0;
        //호텔 층, 방, 몇번째 손님

        int floor = n % h;
        int room = n / h +1;

        if(floor == 0){
            floor = h;
            room = n/h;
        }
        cout << floor * 100 + room <<'\n';

    }


}

//? 자꾸 수식으로 표현하려고 노력하기