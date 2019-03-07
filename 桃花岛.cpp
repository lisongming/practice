#include<bits/stdc++.h>
using namespace std;

bool used[20][20];
char s[400];
int map1[20][20];
int n,m,tx,ty,temps=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

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


void dfs(int x,int y)
{
//	printf("x:%d y£º%d, temp: %d\n",x,y, temp);
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(panduan(nx,ny)){
			continue;
		}
		temps++;
		used[nx][ny]=true;
		dfs(nx,ny);
		used[nx][ny]=false;
	}
} 



int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%s",s);
		for(int j=0;j<n;j++){
			if(s[j]=='#'){
				//map1[i][j]==1;
				map1[i][j] = 1;
			}
			else if(s[j]=='@'){
				temps+=1;tx=i,ty=j,map1[i][j]=1;
			}
		}
//		printf("%s\n", s);
	}
	memset(used,0,sizeof(used));
	used[tx][ty] = true;
	temps = 1;
	dfs(tx,ty);
	printf("%d\n",temps);
	return 0;
}

