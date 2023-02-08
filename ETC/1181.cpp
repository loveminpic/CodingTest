//
//  1181.cpp
//  Array
//
//  Created by Minji on 2023/02/08.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
void solution_1181(int num){
    
    map<string,int> temp;
    vector<string> result;
    
    for(int i = 0 ; i < num; i++){
        string str;
        cin  >> str;
        temp.insert({str, str.size()});
    }
    
    for(int i = 1; i <= 50; i++){
        if(temp.empty()) break;
        for(auto &m  : temp){
            if(m.second == i){
                result.push_back(m.first);
                if(temp.empty()) break;
            }
            else{
                continue;
            }
        }
    }
    
    for(auto &m : result){
        cout << m << "\n";
    }
}

int main(){
    int num;
    cin >> num;
    
    solution_1181(num);
}
