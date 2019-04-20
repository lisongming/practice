#include<bits/stdc++.h>
using namespace std;
int arr[12][12] = {0};   
void showMap(){          
   int i,j;
   for (i = 1;i <= 10;i++){
   	   for (j = 1;j <= 10;j++){
	   		if(arr[i][j] == 1){
			    printf("X");
			}
	   		if(arr[i][j] == 0){
			    printf("0");
			}
	   		if(arr[i][j] == 2){
				printf("*");
			}
	   }
	   printf("\n");
   }
}

int main(){
   int x,y;           
   srand(time(0));
   arr[rand() % 8 + 2][rand() % 8 +2] = 2;   
   x = rand() % 8 + 2;
   y = rand() % 8 + 2;
   while(arr[x][y] == 2){
       x = rand() % 8 + 2;
       y = rand() % 8 + 2;
   }
   arr[x][y] = 1;
   showMap();
   int stepx,stepy;
   while(arr[1][10] != 2){
        printf("up = 8; down = 5; left = 4; right = 6\n");
        printf("please input the number to choose your next direction.\n");
        int dir;           
        scanf("%d",&dir);
   		switch(dir){          
	   		case 4:
		  		stepx =  0;
		  		stepy = -1;
		  		break;
	   		case 8:
				stepx = -1;
		  		stepy =  0;
		  		break;
	   		case 5:
		  		stepx =  1;
		  		stepy =  0;
		  		break;
	   		case 6:	
		  		stepx =  0;
		  		stepy =  1;
		  		break;
  		 }
   		if(!(arr[x + stepx ][y + stepy]) && x + stepx >= 1 && x + stepx <= 10 && y + stepy >= 1 && y + stepy <= 10){            // next step is empty;
        	arr[x][y] = 0;
			x = x + stepx;
			y = y + stepy;
			arr[x][y] = 1;
   		}
   		if(arr[x + stepx][y + stepy] == 2){   
			int tmpx = x + 2 * stepx;
	    	int tmpy = y + 2 * stepy;
			if(tmpx <=10 && tmpx >= 1 && tmpy >= 1 && tmpx <= 10){  
				arr[tmpx][tmpy] = 2;
		    	arr[x + stepx][y + stepy] = 1;
		    	arr[x][y] = 0;
		    	x = x + stepx;
		    	y = y + stepy;
			}
		}
		showMap();
    }
   if(arr[1][10] == 2){
	    printf("YOU WIN\n");
   }
	return 0;
}

