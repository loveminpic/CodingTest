//
//  10808.cpp
//  Array
//
//  Created by Minji on 2023/01/05.

// 문제 : 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
// 입력 : baekjoon
// 출력 : 1 1 0 0 1 / 0 0 0 0 1 /1 0 0 1 2 /0 0 0 0 0 /0 0 0 0 0/ 0

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 65 - 64

void solution (string s) {

    vector<int> result (26);
    fill(result.begin(), result.end(), 0);
    
    int idx;
    
    for(int i = 0; i < s.size(); i++){
        idx = (int)s.at(i) - 97;
        result[idx] += 1 ;
    }
    
    for(auto &a : result){
        cout << a << " " ;
    }
}

int main(void) {
    string s;
    cin >> s;
    solution(s);
}
