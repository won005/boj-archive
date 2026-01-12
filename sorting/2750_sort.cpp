#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//! 오름차순 정렬 (1,2,3..)
//! sort 사용하기
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v;
    int n;
    cin >> n;

    for(int i = 0;i<n;i++){
        int b;
        cin >> b;
        v.push_back(b); 
    }
    
    sort(v.begin(),v.end());

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
    return 0;

}

//! 내립차순
//  sort(arr,arr+n, greater<int>());