//
//  5397.cpp
//  Array
//
//  Created by Minji on 2023/01/09.
//
// 커서의 위치가 줄의 마지막이 아니라면, 그 문자를 입력하고, 커서는 오른쪽으로 한 칸 이동한다. -
#include <iostream>
#include <list>
#include <vector>
// <는 왼쪽이동, > 오른쪽 이동, - 지우기
using namespace std;

int main(void){

    list<char> password;
    string str;
    std::list<char>::iterator it;
    vector<string> result;
    long len;
    string k;
    
    cin >> len;
    
    for(long i = 0; i < len; i++){
        cin >> str;
        it = password.begin();
        for(auto &li : str){
            if(li == '<'){
                if(it != password.begin()){
                    it--;
                }
            }
            else if(li == '>'){
                if(it != password.end()){
                    it++;
                }
            }
            else if(li == '-'){
                if(it != password.begin()){
                    it--;
                    it = password.erase(it);
                }
            }
            else {
                password.insert(it, li);
            }
        }
        
        
        for(auto &m  : password){
            k+= m;
        }
        
        result.push_back(k);
        password.clear();
        k = "";
    }
    
    for(auto &s : result){
        cout << s << "\n";
    }
    return 0;
}
