//
//  9095.cpp
//  Array
//
//  Created by Minji on 2023/02/01.
//
//정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.
#include <iostream>
#include <array>

using namespace std;

void solution_9095(){
    int num;
    cin >> num;
    
    int arr[11];
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    
    for(int i = 4; i < 11 ; i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    
    for( int j = 0; j < num; j++){
        int temp;
        cin >> temp;
        
        cout << arr[temp] << "\n";
    }
}

int main(){
    
    solution_9095();
}
