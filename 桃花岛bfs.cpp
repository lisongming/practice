#include<bits/stdc++.h>
using namespace std;

bool used[5][5];
int map1[20][20];
int i,x,y,n,m,nx,ny,tx,ty,step=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
 
struct State{
	int x;
	int y;
	int step;
	int path[100];
};

bool panduan(int x,int y)
{
	if(x<0||x>=m||y<0||y>=n){
		return true;
	}
	if (used[x][y]) {
		return true;
	}
	if(map1[x][y]==1){
		return true;
	}
	return false;
}

State bfs(){
	queue<State> q;
	State cur;
	cur.x=0;
	cur.y=0;
	cur.step=0;
	used[0][0]=true;
	q.push(cur);
	
	while(!q.empty()){
		for(int i=0;i<4;i++){
		int nx=cur.x+dx[i];
		int ny=cur.y+dy[i];
		if(panduan(nx,ny)){
			continue;
		}
	}
	State next=cur;
			next.x=nx;
			next.y=ny;
			next.path[cur.step]=i;
			next.step=cur.step+1;
			step[nx][ny] = next.step;
			q.push(next);
			}
		}
		cur.step=-1;
		return cur;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%s",s);
		for(int j=0;j<n;j++){
			if(s[j]=='#'){
				map1[i][j] = 1;
			}
			else if(s[j]=='@'){
				temps+=1;tx=i,ty=j,map1[i][j]=1;
			}
		}
	memset(used,0,sizeof(used));
	State s=bfs();
	if(s.step != -1){
		printf("%d",s.step);
	}
	}
	return 0;
}

