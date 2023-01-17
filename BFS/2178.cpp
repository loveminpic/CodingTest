//
//  2178.cpp
//  Array
//
//  Created by Minji on 2023/01/16.
//
/* 4 6
 101111
 101010
 101011
 111011*/

#include <iostream>
#include <queue>
using namespace std;

void solution_2178(){
    // 배열의 크기 받고,
    int n,m;
    cin >> n >> m;
    
    string board[n]; // 입력될 보드 생성
    int dist[n][m];   // 나중에 방문한 보드 생성
    
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    
    for(int i = 0; i < n; i++){
        fill(dist[i], dist[i]+m , -1);
    }
  
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int,int>> q;
    q.push({0,0});
    
    dist[0][0] = 0;
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            if(x < 0 || x >= n || y < 0 || y >= m ) continue;
            if(dist[x][y] >= 0 || board[x][y] != '1') continue;
            q.push({x,y});
            dist[x][y] = dist[cur.first][cur.second]+1;
        }
    }
    cout << dist[n-1][m-1] + 1 ;
}
//int main(void){
//    solution_2178();
//    return 0;
//}

    

