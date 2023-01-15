//
//  10799.cpp
//  Array
//
//  Created by Minji on 2023/01/15.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void solution_10799(){
    stack<char>st;
    int count = 0;
    int result = 0 ;
    bool flag = true;
    string s;
    getline(cin, s);
    
    for(auto &c : s){
        if(c == '('){
            st.push('(');
            count++;
            flag = true;
        }else if(c == ')') {
            if(st.top() == '(' && flag == true){
                count--;
                st.pop();
                result += count * 1;
                flag = false;
            }
            else {
                count--;
                st.pop();
                result++;
        
            }
        }
    }
    cout << result;
}
int main (void){

    solution_10799();
    return 0;
}

