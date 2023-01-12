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
    
    // 입력값 배열을 다 담기
    for(int i = 0; i < len; i++){
        int m;
        cin >> m;
        vec.push_back(m);
    }
    
    //입력된 값만큼 for loop 돌고
    for(int j = 0; j < len; j++){
        // count는 list에 담긴 만큼의 오름차순 숫자
        while(count <= len){
            // 만약 먼저 담고자하는 숫자가 List의 top이 아니면, Count++ 해서 계속 담기
            if(st.empty() || st.top() != vec[j]){
                count++;
                st.push(count);
                result.push_back('+');
                // 만약 count 는 다 담았는데, top과 원하는 값이 일치하지 않으면 해당 주어진 입력값은 출력 불가
                if(count > len && !st.empty()){
                    cout << "NO";
                    return ;
                }
            }
            // 만약 list top값이 원하는 숫자이면 pop!
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

//int main(void){
//    solution_1874();
//}
