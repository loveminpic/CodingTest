//
//  1874.cpp
//  Array
//
//  Created by Minji on 2023/01/10.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solution_1874(){
    int len;
    cin >> len;
    
    vector<int> vec;
    vector<char> result;
    stack<int> st;
    int count = 0;
    
    
    for(int i = 0; i < len; i++){
        int m;
        cin >> m;
        vec.push_back(m);
    }
    
    for(int j = 0; j < len; j++){
        while(count <= len){
            if(st.empty() || st.top() != vec[j]){
                count++; // 6
                st.push(count);
                result.push_back('+');
                if(count > len && !st.empty()){
                    cout << "NO";
                    return ;
                }
            }
            else if (vec[j] == st.top()){
                st.pop();
                result.push_back('-');
                break;
            }
        }
    }
    

    for(auto &stack : result){
        cout << stack << "\n";
    }
    
}

int main(void){
    solution_1874();
}
