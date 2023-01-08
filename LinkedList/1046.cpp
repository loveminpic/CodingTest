//
//  1046.cpp
//  Array
//
//  Created by Minji on 2023/01/08.
//

#include <iostream>
#include <list>
#include <string>

using namespace std;

list<char> li;
string s;
int command;
std::list<char>::iterator t;

void L(){
    if(t != li.begin()){
        --t;
    }
}
void D() {
    if(t != li.end()){
        t++;
    }
}

void B(){
    if( t != li.begin()){
        t--;
        t = li.erase(t);
    }
}
void P(char x){
    li.insert(t,x);
}

int main(void){
    
    cin >> s;
    cin >> command;
    
    for(auto &c : s){
        li.push_back(c);
    }
    
    t = li.end();
    
    string c ;
    
    for(int i = 0; i < command; i++){
        char c;
        cin >> c;
        if(c == 'L'){
            L();
        }
        else if(c == 'D'){
            D();
        }
        else if(c == 'B'){
            B();
        }
        else {
            char m ;
            cin >> m ;
            P(m);
        }
    }
    for(auto& m : li){
        cout<< m;
    }
}
