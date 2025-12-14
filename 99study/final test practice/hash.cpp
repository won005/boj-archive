#include <iostream>
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