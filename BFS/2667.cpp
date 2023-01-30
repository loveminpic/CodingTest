//
//  2667.cpp
//  Array
//
//  Created by Minji on 2023/01/26.
//

#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

void solution_2667(){
    int n;
    cin >> n;
    
    string board[n];
    int vis[n][n];
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    
    for(int i = 0; i < n; i++){
        fill(vis[i],vis[i]+n,-1);
    }
    
    queue<pair<int,int>> q;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == '1'){
                q.push({i,j});
                break;
            }
        }
    }
    
    int max = 1;
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        
        for(int i = 0 ; i < 4; i++){
            
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            
            if(x < 0 || x >= n|| y < 0 || y >= n) continue;
            if(vis[x][y] != -1 ||board[x][y] == '0') continue;
            vis[x][y] = max;
            board[x][y] = '0';
            q.push({x,y});
            
        }
        if(q.empty()){
            for(int j = 0; j < n; j++){
                for(int m = 0; m < n; m++){
                    if(board[j][m] == '1'){
                        q.push({j,m});
                        max++;
                        break;
                    }
                }
            }
        }
    }
    cout << max;
}
//int main(void){
//    solution_2667();
//    
//    return 0;
//}
