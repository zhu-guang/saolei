#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
#include<time.h>
using namespace std;
int saolei[110][110];
int caozuo[110][110];
int x,y,win;
int n;

//用来实行每一步扫雷过程 
void shuchu()
{
	printf("/n");
	printf("  ");
	for(int j=1;j<=y;j++)
	
	printf("%d",j);printf(" ");
	printf("/n");
	for(int i=1;i<=x;i++)
	{
		if (i<=9)
		printf(" ");
		printf("%d",i);
		for(int j=1;j<=y;j++)
		{
			if(caozuo[i][j]==0)
		    printf("█"); //字符映射表找的 
		    else if(caozuo[i][j]>=1&&caozuo[i][j]<=8)
		    printf("%d",caozuo[i][j]);printf(" ");
		    else if(caozuo[i][j]==-2)
		    printf("  ");
		    else
		    printf("* ") ;
		}
		printf("/n");
	}
}


//DFS深度优先搜索 用来实现将空格的部分及其周围同时开出 
void dfs (int xx,int yy)
{
	if (saolei[xx-1][yy]==0 && caozuo[xx-1][yy]!=-2 && xx-1>=1) 
	caozuo[xx-1][yy]=-2,win--,dfs(xx-1,yy);
	if (saolei[xx+1][yy]==0 && caozuo[xx+1][yy]!=-2 && xx+1<=x) 
	caozuo[xx+1][yy]=-2,win--,dfs(xx+1,yy);
	if (saolei[xx][yy-1]==0 && caozuo[xx][yy-1]!=-2 && yy-1>=1) 
	caozuo[xx][yy-1]=-2,win--,dfs(xx,yy-1);
	if (saolei[xx][yy+1]==0 && caozuo[xx][yy+1]!=-2 && yy+1<=y) 
	caozuo[xx][yy+1]=-2,win--,dfs(xx,yy+1);
	
	
}


int main()
{
	
	scanf("%d%d%d",&x,&y,&n);
	win=x*y-n;
	double geshu=x*y;
	geshu=100.0*n/geshu;
	while (n!=0)
	{	
		srand(time(NULL));//随机埋雷 
		for(int i=1;i<=x;i++)  
		{
			for(int j=1;j<=y;j++)
			{ 
				if((rand()*rand())%100<=geshu && saolei[i][j]==0)
				saolei[i][j]=-1,n--;
				if (n==0) break;		
			}
			if (n==0) break;
		} 
	
	}
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
			{
			 	if(saolei[i][j]==0)
			 	{
			 		if(saolei[i-1][j-1]==-1)  saolei[i][j]++;    
			 		if(saolei[i-1][j]==-1)    saolei[i][j]++;
			 		if(saolei[i-1][j+1]==-1)  saolei[i][j]++;
			 		if(saolei[i][j-1]==-1)    saolei[i][j]++;
			 		if(saolei[i][j+1]==-1)    saolei[i][j]++;
			 		if(saolei[i+1][j-1]==-1)  saolei[i][j]++;
			 		if(saolei[i+1][j]==-1)    saolei[i][j]++;
			 		if(saolei[i+1][j+1]==-1)  saolei[i][j]++;
			 		
				 }
			} 
			
		}
	 
	int biaoji=0;	
	while(biaoji==0)
	{
		if(win==0)
		{
			biaoji=1;
			break;
		}
		
		shuchu();
		printf("/n");
		printf("请输入要操作的坐标(x,y)");
		int xx,yy;
		printf("%d%d",xx,yy);
		
		
		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8))
		continue;//fang sb
		
		if(saolei[xx][yy]==-1)
		caozuo[xx][yy]=saolei[xx][yy],biaoji=-1;
		else if(saolei[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,win--;
			dfs(xx,yy);
			
			
		}
		else caozuo[xx][yy]=saolei[xx][yy],win--;		
	} 
		
		shuchu();
		if (biaoji==1)
		printf("你赢了");
		else if (biaoji==-1)
		printf("你输了"); 
}

