#include<bits/stdc++.h>
using namespace std;

bool used[5][5];
int maze[5][5]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};

int step[5][5];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

struct State{
	int x;
	int y;
	int step;
	int path[100];
}; 

bool isInvalidPos(int x,int y)
{
	if(x<0||x>=5||y<0||y>=5){
		return true;
	}
	if(used[x][y]){
		return true;
	}
	if(maze[x][y]==1){
		return true;
	}
	return false;
}

State bfs(){
	queue<State>q;
	State cur;
	cur.x=0;
	cur.y=0;
	cur.step=0;
	used[0][0]=true;
	q.push(cur);
	
	while(!q.empty()){
		cur=q.front();
		q.pop();
		if(cur.x==4&&cur.y==4){
			return cur;
		}
		for(int i=0;i<4;i++){
			int nx=cur.x+dx[i];
			int ny=cur.y+dy[i];
			if(isInvalidPos(nx,ny)){
				continue;
			}
			State next=cur;
			next.x=nx;
			next.y=ny;
			next.path[cur.step]=i;
			next.step=cur.step+1;
			step[nx][ny]=next.step;
			q.push(next);
		}
	}
	cur.step=-1;
	return cur;
}
int main()
{
	memset(used,0,sizeof(used));
	State s=bfs();
	if(s.step!=-1){
		printf("最少需要%d步:\n",s.step);
		int x =0;
		int y =0;
		for(int i=0;i<s.step;i++){
			x=x+dx[s.path[i]];
			y=y+dy[s.path[i]];
			printf("(%d,%d)\n",x,y,s.path[i]);
		}
	}
	return 0;
}

