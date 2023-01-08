//
//  lecture.cpp
//  Array
//
//  Created by Minji on 2023/01/08.
//

#include <iostream>
#include <array>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert2(int addr, int num){
    dat[unused] = num;
    nxt[unused] = nxt[addr];
    pre[unused] = addr;
    if(nxt[addr] != -1){
        pre[nxt[addr]] = unused;
    }
    nxt[addr] = unused;
    unused++;
}

void erase2(int addr){
    
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1){
        pre[nxt[addr]] = pre[addr];
    }
    dat[addr] = -1;
    nxt[addr] = -1;
    pre[addr] = -1;

}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test2(){
  cout << "****** insert_test *****\n";
  insert2(0, 10); // 10(address=1)
  traverse();
  insert2(0, 30); // 30(address=2) 10
  traverse();
  insert2(2, 40); // 30 40(address=3) 10
  traverse();
  insert2(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert2(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test2(){
  cout << "****** erase_test *****\n";
  erase2(1); // 30 40 20 70
  traverse();
  erase2(2); // 40 20 70
  traverse();
  erase2(4); // 40 70
  traverse();
  erase2(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test2();
  erase_test2();
}
