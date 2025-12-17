#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    int N = 10007;  // 소수!
    
    // 해시 코드 (Polynomial)
    int hashCode(string key) {
        int hash = 0;
        for (char c : key) {
            hash = hash * 33 + c;
        }
        return abs(hash);  // 양수로
    }
    
    // 압축 함수 (MAD)
    int compress(int code) {
        return (3 * code + 7) % N;
    }
    
public:
    // 최종 해시 함수
    int hash(string key) {
        return compress(hashCode(key));
    }
};



/*
class HashTableChaining {
private:
    vector<list<Entry>> table;
    int N = 10000;
    int n = 0;  // 전체 항목 수
    
public:
    Iterator find(const Key& k) {
        int index = hash(k);
        return table[index].find(k);  // 리스트에서 검색
    }
    
    Iterator put(const Key& k, const Value& v) {
        Iterator it = find(k);
        
        if (it == end()) {  // 새 키
            n++;
        }
        
        int index = hash(k);
        return table[index].put(k, v);  // 리스트에 삽입/수정
    }
    
    void erase(const Key& k) {
        Iterator it = find(k);
        
        if (it != end()) {
            n--;
            int index = hash(k);
            table[index].erase(k);
        }
    }
};

*/