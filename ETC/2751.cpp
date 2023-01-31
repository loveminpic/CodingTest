//
//  2751.cpp
//  Array
//
//  Created by Minji on 2023/01/31.
//

#include <iostream>
#include <vector>

using namespace std;

void solution_2751(int num){
    vector<int> vec;
    for(int i =0 ; i< num; i++){
        int m;
        cin >> m;
        vec.push_back(m);
    }
    sort(vec.begin(), vec.end());
    
    for(auto &n : vec){
        cout << n << "\n";
    }
}
//int main(){
//    int num;
//
//    cin >> num;
//    solution_2751(num);
//
//}
