//
//  10828.cpp
//  Array
//
//  Created by Minji on 2023/01/10.
//

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int main(void){
 
    int len;
    cin >> len;
    
    string command;
    stack<int> st;
    int count = 0;
    vector<int> result;
    
    for(int i = 0 ; i < len; i++){
        cin >> command;
        
        if(command == "push"){
            int x;
            cin >> x;
            st.push(x);
            count++;
            
        }else if (command == "pop"){
            if(!st.empty()){
                result.push_back(st.top());
                st.pop();
                count--;
            }
            else {
                result.push_back(-1);
            }
        }else if (command == "size"){
            result.push_back(count);
            
        }else if (command == "empty"){
            if(st.empty()){
                result.push_back(1);
            }
            else{
                result.push_back(0);
            }
            
        }else if (command == "top"){
            if(!st.empty()){
                result.push_back(st.top());
            }else{
                result.push_back(-1);
            }
        }
        
    }
    for(auto &num : result){
        cout << num << "\n";
    }
    
}
