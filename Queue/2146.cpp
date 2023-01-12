//
//  2146.cpp
//  Array
//
//  Created by Minji on 2023/01/12.
//

#include <iostream>
#include <queue>

using namespace std;
void s_2146(){
    int num ;
    cin >> num;
    
    queue<int> qu;
    
    for(int i = 1; i <= num; i++){
        qu.push(i);
    }
    
    int temp = 0;
    
    while(qu.size() != 1){
        qu.pop();
        temp = qu.front();
        qu.pop();
        qu.push(temp);
    }
    
    cout << qu.front();
}

//int main(){
//    s_2146();
//    return 0;
//}
