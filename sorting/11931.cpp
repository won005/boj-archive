#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    while(--n>=0){
        int b;
        cin >> b;
        v.push_back(b);
    }

    sort(v.begin(),v.end(),greater<int>()); //! 내림차순
    for(int i : v){
        cout <<i<<'\n';
    }
}