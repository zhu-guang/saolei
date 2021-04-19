#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int zuobiao[10086][10086];
int caozuo[10086][10086];
int i,j,x,y,xx,yy,n,geshu,win;

void mianban()                                          //面板所显示出的样子
{	
	for(i=1;i<=x;i++)
	{
		printf("\n");
		for(j=1;j<=y;j++)
		{
			if(caozuo[i][j]==0)
				printf("█ ");                          //符号后面有一个空格，如果没有空格会叠加在一起
			else if(caozuo[i][j]>=1&&caozuo[i][j]<=8)
				printf("%d",caozuo[i][j]),
				printf(" ");                            //对应上面█后面的一个空格，保持各行对齐
			else if(caozuo[i][j]==-2)
				printf("  ");                           //有两个空格,理由与上相同
			else
				printf("* ");                           //*表示雷，同理后面有空格
		}
	}
	printf("\n");
}


	void dfs (int xx,int yy)                                  //使空格及周边连续空格能一次开出，减少操作次数
{
	if (zuobiao[xx-1][yy]==0 && caozuo[xx-1][yy]!=-2 && xx-1>=1) 
	caozuo[xx-1][yy]=-2,win--,dfs(xx-1,yy);
	if (zuobiao[xx+1][yy]==0 && caozuo[xx+1][yy]!=-2 && xx+1<=x) 
	caozuo[xx+1][yy]=-2,win--,dfs(xx+1,yy);
	if (zuobiao[xx][yy-1]==0 && caozuo[xx][yy-1]!=-2 && yy-1>=1) 
	caozuo[xx][yy-1]=-2,win--,dfs(xx,yy-1);
	if (zuobiao[xx][yy+1]==0 && caozuo[xx][yy+1]!=-2 && yy+1<=y) 
	caozuo[xx][yy+1]=-2,win--,dfs(xx,yy+1);
	
	
}	

int main()
{
	
	double geshugl;
	printf("请输入你需要雷阵的大小（x(竖),y（横）），以及要埋的雷个数n(x,y,n)：");
	scanf("%d%d%d",&x,&y,&n);/*输入格数（纵横长度x，y）以及要埋雷（n）的个数*/
	printf("游戏开始！");
	geshu=x*y;
	win=x*y-n;                       //通过点开没有雷的格数来判定最后胜利
	geshugl=100.0*n/geshu;
	srand((unsigned int)time(0));
	while(n!=0)                      //随机埋雷
	{
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(rand()%100<=geshugl&&zuobiao[i][j]==0)
					zuobiao[i][j]=-1,n--;
				if(n==0)
					break;
			}
			if(n==0)
				break;
		}
		
	}


			for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{   
			 	if(zuobiao[i][j]==0)                       //显示周围九宫格雷的个数
			 	{
			 		if(zuobiao[i-1][j-1]==-1)  zuobiao[i][j]++;   
			 		if(zuobiao[i-1][j]==-1)    zuobiao[i][j]++;
			 		if(zuobiao[i-1][j+1]==-1)  zuobiao[i][j]++;
			 		if(zuobiao[i][j-1]==-1)    zuobiao[i][j]++;
			 		if(zuobiao[i][j+1]==-1)    zuobiao[i][j]++;
			 		if(zuobiao[i+1][j-1]==-1)  zuobiao[i][j]++;
			 		if(zuobiao[i+1][j]==-1)    zuobiao[i][j]++;
			 		if(zuobiao[i+1][j+1]==-1)  zuobiao[i][j]++;
			 		
				 }
			} 
			
		}

	
	int what=0;
	
	while(what==0)
	{
		if(win==0)
		{
			what=1;
			break;
		}
		mianban();
		printf("请输入要操作的坐标（x(竖),y（横））:");
		scanf("%d%d",&xx,&yy);

		if(caozuo[xx][yy]==-2||(caozuo[xx][yy]>=1&&caozuo[xx][yy]<=8)) //防止通过重复输入相同的坐标而使win变为0从而出现问题。
			continue;

		if(zuobiao[xx][yy]==-1)
			caozuo[xx][yy]=zuobiao[xx][yy],what=-1;
		else if(zuobiao[xx][yy]==0)
		{
			caozuo[xx][yy]=-2,win--;
			dfs(xx,yy);
		}     
		else
			caozuo[xx][yy]=zuobiao[xx][yy],win--;
	}
	
	 mianban();
	if(what==1)
		printf("你赢了！");
	if(what==-1)
		printf("你输了！");

}# saolei
saolei
