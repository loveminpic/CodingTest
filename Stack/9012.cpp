//
//  9012.cpp
//  Array
//
//  Created by Minji on 2023/02/02.
//

#include <iostream>
#include <stack>
using namespace std;

void soulution_9012(){
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++){
        string X;
        cin >> X;
        stack<char> st;
        char temp = '1';
        
        for(int j = 0; j < X.size(); j++){
            if(X[j] == '('){
                st.push('(');
            }
            else {
                if(!st.empty()){
                    temp = st.top();
                    if(temp == '('){
                        st.pop();
                    }
                    else {
                        st.push(')');
                    }
                }
                else {
                    st.push(')');
                    break;
                }
            }
            
        }
        if(st.empty()){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
        
    }
}
//int main(){
////    soulution_9012();
//    return 0;
//}
