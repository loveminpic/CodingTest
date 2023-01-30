//
//  4179.cpp
//  Array
//
//  Created by Minji on 2023/01/19.
//
/*
 각각의 문자들은 다음을 뜻한다.
 #: 벽
 .: 지나갈 수 있는 공간
 J: 지훈이의 미로에서의 초기위치 (지나갈 수 있는 공간)
 F: 불이 난 공간
 J는 입력에서 하나만 주어진다.*/

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void solution_4179(){
    int n, m;
    cin >> n >> m;
    
    string board[n];
    int vis[n][m];
    int fire[n][m];
    for(int i = 0; i < n; i++) fill(fire[i], fire[i]+m, 1005);
    for(int i = 0; i < n; i++) fill(vis[i], vis[i]+m, -1);
    
    queue<pair<int,int>> q;
    queue<pair<int,int>> q2;
    
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0, 1, 0, -1};
    
    for(int i= 0; i < n; i++){
        cin >> board[i];
    }
    
    for(int i= 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 'F'){
                q.push({i,j});
                fire[i][j] = 0;
            }else if(board[i][j]  == 'J'){
                q2.push({i,j});
                vis[i][j] = 0;
            }
        }
    }
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            
            if(x < 0 || x >= n || y < 0 || y >= m ) continue;
            if(board[x][y] == '#' || fire[x][y] <= 1000 ) continue;
            q.push({x,y});
            fire[x][y] = fire[cur.first][cur.second] + 1;
        }
    }
    
    
    while(!q2.empty()){
        pair<int,int> cur = q2.front();
        q2.pop();
        for(int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            
            if(x < 0 || x >= n || y < 0 || y >= m ) continue;
            if(board[x][y] == '#' || vis[x][y] >= 0 ) continue;
            q2.push({x,y});
            vis[x][y] = vis[cur.first][cur.second] + 1;
        }
    }
    
    
    int mi = 100000;
    
    for(int i= 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( i == 0 || j == m-1  || i == n-1 || j == 0 ){
                if(fire[i][j] != -1 && vis[i][j] != -1 && fire[i][j] > vis[i][j]){
                    mi = min(mi, vis[i][j]);
                }
            }
        }
    }
    if(mi == 100000){
        cout << "IMPOSSIBLE";
        
    }else {
        cout << mi + 1;
    }
}

//int main(){
//
//    solution_4179();
//    return 0;
//}
