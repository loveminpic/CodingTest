//
//  10845.cpp
//  Array
//
//  Created by Minji on 2023/01/12.
//

/*정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
 
 명령은 총 여섯 가지이다.
 push X: 정수 X를 큐에 넣는 연산이다.
 pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 size: 큐에 들어있는 정수의 개수를 출력한다.
 empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
 front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.*/

#include <iostream>
#include <string>
#include <queue>
using namespace std;

void s_10845(){
    int len;
    cin >> len;
    queue<int> qu;
    queue<long> result;
    
    for(int i =0 ; i < len; i++){
        string str;
        cin >> str;
        if(str == "size"){
            result.push(qu.size());
        }
        else if (str == "empty"){
            if(qu.empty()){
                result.push(1) ;
            }
            else {
                result.push(0) ;
            }
        }
        else if (str == "front"){
            if(!qu.empty()) {
                result.push(qu.front()) ;
            }else {
                result.push(-1) ;
            }
        }
        else if (str == "back"){
            if(!qu.empty()) {
                result.push(qu.back()) ;
            }else{
                result.push(-1) ;
            }
        }
        else if (str == "push"){
            int x;
            cin >> x;
            qu.push(x);
        }
        else if (str == "pop"){
            if(qu.empty()){
                result.push(-1) ;
            }
            else {
                result.push(qu.front());
                qu.pop();
            }
        }
    }
    long len2 = result.size();
    for(int i =0; i < len2;i++){
        cout << result.front() << "\n";
        result.pop();
    }
}


