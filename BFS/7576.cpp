//
//  7576.cpp
//  Array
//
//  Created by Minji on 2023/01/16.
//

#include <iostream>
#include <queue>

using namespace std;

//int main(){
//    int n, m;
//    cin >> m >> n;
//    
//    int board[n][m];
//    int dist[n][m];
//    
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            cin >> board[i][j];
//        }
//    }
//    
//    for(int i = 0; i < n; i++) {
//        fill(dist[i],dist[i]+m,-1);
//    }
//    queue<pair<int,int>> q;
//    
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            if(board[i][j] == 1){
//                q.push({i,j});
//                dist[i][j] = 0;
//            }
//        }
//    }
//    
//    int dx[4] = {1,0,-1,0};
//    int dy[4] = {0,1,0,-1};
//    
//    while(!q.empty()){
//        pair<int,int> cur = q.front();
//        q.pop();
//        
//        for(int i = 0; i < 4; i++){
//            
//            int x = cur.first + dx[i];
//            int y = cur.second + dy[i];
//            
//            if( x < 0 || x >= n || y < 0 || y >= m ) {
//                continue;
//            }
//            if(board[x][y] == -1 || board[x][y] ==  1 || dist[x][y] >= 0 ){
//                continue;
//            }
//            q.push({x,y});
//            dist[x][y] = dist[cur.first][cur.second] + 1;
//            board[x][y] = 1;
//        }
//    }
//    int mx  = 0 ;
//    
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            if(board[i][j] == 0){
//                mx = -1;
//                break;
//            }else{
//                mx = max(mx, dist[i][j]);
//            }
//        }
//        if(mx == -1){
//            break;
//        }
//    }
//    
//    cout << mx ;
//    return 0;
//}
