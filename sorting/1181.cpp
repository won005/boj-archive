#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//! 문자열 길이 비교
//  sort 비교함수
using namespace std;


// 문자열 길이 비교 함수 생성
bool compare(const string& a, const string& b) { 
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<string> words;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    
    sort(words.begin(), words.end(), compare);
    //sort(시작, 끝, 비교함수) 
    
    // 중복 제거 후 출력
    cout << words[0] << '\n';
    for (int i = 1; i < n; i++) {
        if (words[i] != words[i-1]) { //현재 단어가 이전 단어와 다르면 출력
            cout << words[i] << '\n';
        }
    }
    
    return 0;
}

//? compare(string a, string b) vs (const string &a,const string &b)
//  값 복사 vs 참조
//  string을 통째로 복사 -> 메모리 낭비 느리다.
//  원본을 가리키기만 -> 복사x 빠르다.

//? 중복 검사 - unique() + erase()
//  unique(word.begin(), words.end()) 중복을 뒤로 밀고, 새로운 끝 위치를 반환한다.
//  erase()로 중복 부분을 삭제 가능
/*
words = ["a", "a", "as", "be", "be", "no"]

*unique 실행후
words = ["a", "as", "be", "no",/// "be", "no"]

*erase 실행후
words = ["a", "as", "be", "no"]

*/