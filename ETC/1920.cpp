//
//  1920.cpp
//  Array
//
//  Created by Minji on 2023/02/02.
//
/*5
 4 1 5 2 3
 5
 1 3 7 9 5*/

#include <iostream>
#include <vector>

using namespace std;

void solution_1920(vector<int> &a, vector<int> &b){
    int temp = 0;
    
    for(auto &m : b){
        for(auto &n : a){
            if( n == m ){
                temp = 1;
                break;
            }
        }
        cout << temp << "\n";
        temp = 0;
    }
}
//int main(){
//    int num;
//    cin >> num;
//
//    vector<int> vec;
//    vector<int> check;
//
//    for(int i = 0; i < num; i++){
//        int temp;
//        cin >> temp;
//        vec.push_back(temp);
//    }
//
//    int num2;
//    cin >> num2;
//
//    for(int i = 0; i < num2; i++){
//        int temp;
//        cin >> temp;
//        check.push_back(temp);
//    }
//
//    solution_1920(vec, check);
//
//    return 0;
//}
