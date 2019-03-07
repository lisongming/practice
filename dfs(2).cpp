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

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

bool findRes =false;
int minStep=999999999;

struct State{
	int x;
	int y;
	int step;
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

void dfs(int x,int y,int step){
	if(x==4&&y==4){
		findRes=true;
		minStep=min(minStep,step);
		return;
	}
	printf("x:%d,y:%d,step:%d\n",x,y,step);
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(isInvalidPos(nx,ny)){
			continue;
		}
		used[nx][ny]=true;
		dfs(nx,ny,step+1);
		used[nx][ny]=false;
	}
}
int main()
{
	memset(used,0,sizeof(used));
	dfs(0,0,0);
	if(findRes){
		printf("最少需要%d步\n",minStep);
	}
	return 0;
}

