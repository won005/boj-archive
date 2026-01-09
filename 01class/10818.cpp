#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> vec(a);

    for(int i = 0;i <a;i++){
        cin >>vec[i]; //! cin 으로 다이레트로 넣게 될때는
        //! 백터 크기 할당 꼭 필요함
        //? push 면 상관 없음
    }

    sort(vec.begin(),vec.end());

    cout << vec[0]<<" "<< vec[vec.size()-1];
}