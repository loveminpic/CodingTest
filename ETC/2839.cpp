//
//  2839.cpp
//  Array
//
//  Created by Minji on 2023/01/30.
//

#include <iostream>
using namespace std;

int solution_2839(int sugar){
    
    int left = sugar;
    
    int count_3 = 5000;
    int count_5 = 5000;
    
    int temp1 = 0;
    int temp2 = 0;
    
    while(left >= 5){
        left =  left - 5;
        temp1++;
        if(left % 3 == 0){
            temp2 = left / 3;
        }
        else {
            continue;
        }
        if(temp1+temp2 < count_3+count_5){
            count_5 = temp1;
            count_3 = temp2;
        }
    }
    if(count_3 * 3 + count_5 * 5 != sugar){
        if(sugar % 3 == 0 ){
            return sugar/3 ;
        }else if (sugar % 5 == 0){
            return sugar /5 ;
        }else{
            return -1;
        }}
    
    return count_3 + count_5;
}

//int main()
//{
//    int sugar;
//
//    cin >> sugar;
//
//    cout << solution_2839(sugar);
//
//}

