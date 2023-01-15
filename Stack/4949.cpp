//
//  4949.cpp
//  Array
//
//  Created by Minji on 2023/01/13.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solution_4949(){
    string s;
    stack<char> st;
    char temp;
    vector<string> vec;
    
    getline (cin, s);
    
    while(s != "."){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '['){
                st.push(s[i]);
            }
            else if (s[i] == ')'){
                if(!st.empty()){
                    temp = st.top();
                    if(temp == '('){
                        st.pop();
                    }else{
                        vec.push_back("no");
                        break;
                    }
                }else {
                    vec.push_back("no");
                    break;
                }
            }
            else if (s[i] == ']'){
                if(!st.empty()){
                    temp = st.top();
                    if(temp == '['){
                        st.pop();
                    }else{
                        vec.push_back("no");
                        break;
                    }
                }else {
                    vec.push_back("no");
                    break;
                }
            }
            else if (s[i] == '.'){
                if(!st.empty()){
                    vec.push_back("no");
                }else{
                    vec.push_back("yes");
                }
                break;
            } else {
                continue;
            }
        }
        while(!st.empty()) st.pop();
        getline (cin, s);
    }
    
    for(auto &flag : vec){
        cout << flag << "\n";
    }
}
//int main(void){
//    solution_4949();
//    return 0;
//}
