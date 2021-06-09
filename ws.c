#include<stdio.h> 
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char Name[20];
    int Number;
    char Zhuanye[20];
    float Yuwen;
    float Shuxue;
    float Yingyu;
    float Lishi;
    float Chengxu;
    float Tiyu;
    struct student *next;
};

//1,创建链表，并输入学生信息 
struct student *creat()
{ 
	int n;
	int i;
	struct student *p;
	struct student *q;	
	struct student *head;															//三个结构体指针变量 
	head = NULL;
	printf("请输入总人数：");
	scanf("%d",&n);
	if(n <= 0)
	{
		printf("人数输入错误！\n");
		return 0;
	}
	p = q = (struct student *)malloc(sizeof(struct student));
	printf("请输入姓名\t学号\t专业\n");
	scanf("%s",p->Name);
	scanf("%d",&p->Number);
	scanf("%s",p->Zhuanye);
	head = p;																			//将第一个学生的信息赋给头指针head 																	
	for(i = 0; i<n-1; i++)																//因为开始就输入了一个学生的信息所以学生总数-1 
	{																					//第二个及以后的学生信息通过这个来进行录入 
		q = (struct student *)malloc(sizeof(struct student));
		scanf("%s",q->Name);
		scanf("%d",&q->Number);
		scanf("%s",q->Zhuanye);
		p->next = q;
		p = q;
		q->next = NULL;	
	}
	p->next = NULL;																	//NULL赋给p的指针域
	printf("\n学生基本信息已录入\n");
	printf("退出学生基本信息录入系统\n");											//退出学生基本信息录入系统 
	return (head);																	
}
//2-1-录入语文成绩
struct student *luruyuwen(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的语文成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Yuwen);
		p = p->next;
	}
	printf("语文成绩录入完毕\n\n");
	return (head);
}
//2-2-录入数学成绩
struct student *lurushuxue(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的数学成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Shuxue);
		p = p->next;
	}
	printf("数学成绩录入完毕\n\n");
	return (head);
}
//2-3-录入英语成绩
struct student *luruyingyu(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的英语成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Yingyu);
		p = p->next;
	}
	printf("英语成绩录入完毕\n\n");
	return (head);
}
//2-4-录入历史成绩
struct student *lurulishi(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的历史成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Lishi);
		p = p->next;
	}
	printf("历史成绩录入完毕\n\n");
	return (head);
}
//2-5-录入程序成绩
struct student *luruchengxu(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的程序成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Chengxu);
		p = p->next;
	}
	printf("程序成绩录入完毕\n\n");
	return (head);
}
//2-6-录入体育成绩
struct student *lurutiyu(struct student *head)
{
	struct student *p;
	p = head;
	printf("请依次输入学生的体育成绩\n");
	while(p!=NULL)
	{
		printf("%s %d %s ",p->Name,p->Number,p->Zhuanye);
		scanf("%f",&p->Tiyu);
		p = p->next;
	}
	printf("体育成绩录入完毕\n\n");
	return (head);
}
//2-录入学生单科成绩 
struct student *luru(struct student *head)
{
	struct student *p;
	p = head;
	int i;
	printf("进入学生单科成绩录入系统\n"); 
	printf("录入语文成绩----请按1\n");
	printf("录入数学成绩----请按2\n");
	printf("录入英语成绩----请按3\n");
	printf("录入历史成绩----请按4\n");
	printf("录入程序成绩----请按5\n");
	printf("录入体育成绩----请按6\n");
	printf("结束录入----请按0\n");
	scanf("%d",&i);
	while(i!=0)
	{
		switch(i)
		{
			case 1:
				p = luruyuwen(head);
				break;
			case 2:
				p = lurushuxue(head);
				break;
			case 3:
				p = luruyingyu(head);
				break;
			case 4:
				p = lurulishi(head);
				break;
			case 5:
				p = luruchengxu(head);
				break;
			case 6:
				p = lurutiyu(head);
				break;
			default:
				printf("error\n");
				break;
		}
		printf("录入语文成绩----请按1\n");
		printf("录入数学成绩----请按2\n");
		printf("录入英语成绩----请按3\n");
		printf("录入历史成绩----请按4\n");
		printf("录入程序成绩----请按5\n");
		printf("录入体育成绩----请按6\n");
		printf("结束录入----请按0\n");
		scanf("%d",&i);
	}
	printf("录入完毕，退出学生成绩录入系统\n\n"); 
	return (p);
}

//3-增加学生信息  
void zengjia(struct student *head)
{
	struct student *p;
	struct student *q;
	int i = 1;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	p = head;
	while(p->next!=NULL) {
			p = p->next;																//当while结束后p->next==NULL，p则指向最后一名学生 
		}
	while(i!=0) 
	{
		q = (struct student *)malloc(sizeof(struct student));
		printf("请输入要添加的学生姓名:\n");
		scanf("%s",q->Name);
		printf("请输入学号:\n");
		scanf("%d",&q->Number);
		printf("请输入专业:\n");
		scanf("%s",q->Zhuanye);
        printf("请输入语文成绩:\n");
		scanf("%f",&q->Yuwen);
		printf("请输入数学成绩:\n");
		scanf("%f",&q->Shuxue);
		printf("请输入英语成绩:\n");
		scanf("%f",&q->Yingyu);
		printf("请输入历史成绩:\n");
		scanf("%f",&q->Lishi);
		printf("请输入程序成绩:\n");
		scanf("%f",&q->Chengxu);
		printf("请输入体育成绩:\n");
		scanf("%f",&q->Tiyu);
		q->next = NULL;																//将输入的这名学生的指针域赋为NULL 
		p->next = q;																	//将这名学生的信息域赋给前一个同学p的指针域 
		printf("已新增学生信息\n");
		printf("\n如果输入0 则不再录入   如果输入1 则继续录入\n");
		scanf("%d", &i);
	}
	printf("增加完毕，已退出学生信息增加系统\n\n");
} 

//4-删除学生信息
struct student *shanchu(struct student *head)
{
	struct student *p;
	struct student *t;
	char name[20];
	int number;
	if(head == NULL)
	{
		printf("error\n");
		return (head);
	}
	p = head;
	printf("请输入你想删除的人的姓名\n"); 
	scanf("%s",name);
	printf("请输入你想删除的人的学号\n"); 
	scanf("%d",&number);
	if(strcmp(p->Name,name) == 0&&number == p->Number)																		//如果姓名学号都匹配的话 
	{
		printf("你即将删除的学生信息为:\n");																			//要删除的学生为第一个人时 
		printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\n");
        printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
		p = p->next;																										//p指向下一个学生 
		head = p; 																										//将下一个学生的信息赋给头指针 
		printf("学生 %s 删除成功\n",name);
		return (head);
	}else
	{
		p = p->next;																										//跳过第一个学生后 
		while(p->next!=NULL&&strcmp(p->Name,name)!=0&&number!=p->Number)												 
		{
			t = p;																										//通过t来保留p的前一条链 （如果要删除的是第二个人的话则直接跳过） 
			p = p->next;
		}
		if(strcmp(p->Name,name) == 0&&number == p->Number)																	//找到要删除的学生 
		{
			printf("你即将删除的学生信息为:\n");
			printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\t总分\t排名\n");
        	printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
			p = p->next;																									//p指向下一个学生 
			t->next = p;																									//将下一个学生的信息赋给t  																									
			printf("学生 %s 删除成功\n",name);
			return (head);
		}else
		{
			printf("根本没有这号人！\n");
		}
	}
	printf("退出学生信息删除系统\n\n");
	return (head);
}

//5-通过姓名和学号去修改学生数据
struct student *xiugai(struct student *head) 
{
	struct student *p;
	char name[20];
	int number;
	if(head == NULL)
	{
		printf("error\n");
		return (head);
	}
	printf("请输入你想修改的人的姓名：");
	scanf("%s",name);
	printf("请输入你想修改的人的学号：");
	scanf("%d",&number);
    p = head;
    if(head == NULL)
    {
    	printf("error\n");
    	return (head);
	}
	while(strcmp(name,p->Name)!=0&&number==p->Number&&p!=NULL)
    {
		p = p->next;
    }  																									//直到找到为止
    if(strcmp(name,p->Name) == 0&&number == p->Number)
    {
		printf("你要修改的学生信息为:\n");																//输入要修改的学生的各类信息 
		printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\t总分\t排名\n");
        printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
		printf("请修改姓名:\n");
		scanf("%s",p->Name);
		printf("请修改学号:\n");
		scanf("%d",&p->Number);
		printf("请修改专业:\n");
		scanf("%s",p->Zhuanye);
        printf("请修改语文成绩:\n");
		scanf("%f",&p->Yuwen);
		printf("请修改数学成绩:\n");
		scanf("%f",&p->Shuxue);
		printf("请修改英语成绩:\n");
		scanf("%f",&p->Yingyu);
		printf("请修改历史成绩:\n");
		scanf("%f",&p->Lishi);
		printf("请修改程序成绩:\n");
		scanf("%f",&p->Chengxu);
		printf("请修改体育成绩:\n");
		scanf("%f",&p->Tiyu);
		printf("成绩已经更新完毕\n");
		printf("更新后的学生成绩为:\n");
		printf("姓名\t学号\t语文\t数学\t英语\t历史\t程序\t体育\t总分\t排名\n");
        printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
    }else
	{
		printf("没有%s这号人！！！\n",name);
	}
	printf("退出学生信息修改系统\n");
	return (head);
}

//6-1-查询语文成绩排名 
void cxyuwen(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)																				//将每一个学生的语文成绩和学号赋给数组 
	{
		tscore[n] = p->Yuwen;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)																			//冒泡排序，对语文成绩进行排序，并且将与之对应的学生的学号进行下面的输出成绩单 
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("语文成绩排名如下：\n");
	printf("姓名 学号 专业 语文成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 （利用学号去寻找那个对应的进行排序后的学生成绩和学号） 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);			//输出学生语文成绩排名 
				break;
			}
		}
	}
	printf("语文成绩排名输出完毕\n");
}
//6-2-查询数学成绩排名 																			//以下 6-n均为6-1更改而来 
void cxshuxue(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)
	{
		tscore[n] = p->Shuxue;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("数学成绩排名如下：\n");
	printf("姓名 学号 专业 数学成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);
				break;
			}
		}
	}
	printf("数学成绩排名输出完毕\n\n");
}
//6-3-查询英语成绩排名 
void cxyingyu(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)
	{
		tscore[n] = p->Yingyu;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("英语成绩排名如下：\n");
	printf("姓名 学号 专业 英语成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);
				break;
			}
		}
	}
	printf("英语成绩排名输出完毕\n");
}
//6-4-查询历史成绩排名 
void cxlishi(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)
	{
		tscore[n] = p->Lishi;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("历史成绩排名如下：\n");
	printf("姓名 学号 专业 历史成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);
				break;
			}
		}
	}
	printf("历史成绩排名输出完毕\n");
}
//6-5-查询程序成绩排名 
void cxchengxu(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)
	{
		tscore[n] = p->Chengxu;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("程序成绩排名如下：\n");
	printf("姓名 学号 专业 程序成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);
				break;
			}
		}
	}
	printf("程序成绩排名输出完毕\n");
}
//6-6-查询体育成绩排名 
void cxtiyu(struct student *head)
{
	struct student *p;
	struct student *q;
	int tnumber[200000];
	int ynumber;
	float tscore[200000];
	float yscore;
	int i;
	int j;
	int n = 0;
	q = p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	while(p!=NULL)
	{
		tscore[n] = p->Tiyu;  
		tnumber[n] = p->Number; 
		p = p->next;
		n++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tscore[i]<tscore[j])
			{
				yscore = tscore[i];		ynumber = tnumber[i];
				tscore[i] = tscore[j];	tnumber[i] = tnumber[j];
				tscore[j] = yscore;		tnumber[j] = ynumber;
			}
		}
	} 
	printf("排名完毕\n");
	printf("体育成绩排名如下：\n");
	printf("姓名 学号 专业 体育成绩 排名：\n"); 
	for(i=0,j=0;i<n;i++,j++)
	{
		for(q=head;q!=NULL;q=q->next)
		{
			if(tnumber[i] == q->Number)															//学号相同 
			{
				printf("%s %d %s %f %d\n",q->Name,q->Number,q->Zhuanye,tscore[i],j+1);
				break;
			}
		}
	}
	printf("体育成绩排名输出完毕\n");
}
//6-查询某一科的成绩排名 
void cxpaiming(struct student *head)
{
	struct student *p;
	int i;
	p=head; 
	printf("进入学生单科成绩排名系统\n"); 
	printf("查询语文成绩排名请按1\n");
	printf("查询数学成绩排名请按2\n");
	printf("查询英语成绩排名请按3\n");
	printf("查询历史成绩排名请按4\n");
	printf("查询程序成绩排名请按5\n");
	printf("查询体育成绩排名请按6\n");
	printf("结束查询请按0\n");
	scanf("%d",&i);
	while(i!=0)
	{
		switch(i)
		{
			case 1:
				cxyuwen(p);
				break;
			case 2:
				cxshuxue(p);
				break;
			case 3:
				cxyingyu(p);
				break;
			case 4:
				cxlishi(p);
				break;
			case 5:
				cxchengxu(p);
				break;
			case 6:
				cxtiyu(p);
				break;
			default:
				printf("error\n");
				break;
		}
		printf("查询语文成绩排名请按1\n");
		printf("查询数学成绩排名请按2\n");
		printf("查询英语成绩排名请按3\n");
		printf("查询历史成绩排名请按4\n");
		printf("查询程序成绩排名请按5\n");
		printf("查询体育成绩排名请按6\n");
		printf("结束查询请按0\n");
		scanf("%d",&i);
	}
	printf("退出查询学生成绩排名系统\n\n");
}

//7-查询学生信息 
void chaxunchengji(struct student *head)
{
	struct student *p;
	struct student *q;
	char name[20];
	int number;
	if(head == NULL)
    {
    	printf("错误！\n");
    	return ;
	}
	printf("请输入要查询的学生的姓名：");
	scanf("%s",name);
	printf("请输入要查询的学生的学号：");
	scanf("%d",&number);
	p = head;
	q = p->next;
	if(strcmp(name,p->Name) == 0&&number == p->Number)
	{
		printf("查询的学生信息为:\n");
		printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\n");
		printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
	}else
	{
		while(q&&(strcmp(q->Name,name)!=0)&&number!=p->Number)
		{
			q = q->next;
		}
		if(q)																							//找到了这个学生 
		{
			printf("查询的学生信息为:\n");
			printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\n");
			printf("%s %d %s %f %f %f %f %f %f\n",q->Name,q->Number,q->Zhuanye,q->Yuwen,q->Shuxue,
									q->Yingyu,q->Lishi,q->Chengxu,q->Tiyu);
		}else																							//没有找到 
		{
			printf("没有%s这一号人！！！\n",name);
		}
	}
	printf("退出某一学生信息查询系统\n");
}

//8-统计所有不及格科目超过两科的学生名单
void bujige(struct student *head)
{
	struct student *p;
	int sum = 0;
	p = head;
	if(head == NULL)
    {
    	printf("错误！\n");
    	return ;
	}
	printf("\n以下为不及格目超过两科的学生名单\n");
	printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\n");
	while(p!=NULL)
	{
		if(p->Yuwen<60)
		{
			sum++;
		}
		if(p->Shuxue<60)
		{
			sum++;
		}
		if(p->Yingyu<60)
		{
			sum++;
		}
		if(p->Chengxu<60)
		{
			sum++;
		}
		if(p->Lishi<60)
		{
			sum++;
		}
		if(p->Tiyu<60)
		{
			sum++;
		}
		if(sum>2)
		{
			printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
		}
		sum = 0;																								//重复利用sum 
		p = p->next;																							//进行下一项并继续查询 
	}
	printf("不及格科目超过两科的学生名单如上\n");
}

//9-输出学生信息
void put(struct student *head)
{
	struct student *p;
	p = head;
	if(head == NULL)
	{
		printf("error\n");
		return ;
	}
	printf("\n当前学生信息结果如下\n"); 
	printf("姓名\t学号\t专业\t语文\t数学\t英语\t历史\t程序\t体育\n");
	while(p!=NULL)
	{
        printf("%s %d %s %f %f %f %f %f %f\n",p->Name,p->Number,p->Zhuanye,p->Yuwen,p->Shuxue,
									p->Yingyu,p->Lishi,p->Chengxu,p->Tiyu);
		p = p->next;
	}
	printf("学生信息输出完毕\n"); 
}

//0-主函数 
int main()
{
	struct student *head;
	head = NULL;
	int choice;
	printf("欢迎使用我的学生成绩管理系统\n");
	printf("\n输入1----可录入学生的基本信息\n");
	printf("输入2----可录入学生的单科成绩\n");
	printf("输入3----可增加学生的信息\n");
	printf("输入4----可删除学生基本成绩\n");
	printf("输入5----可修改学生基本成绩\n");
	printf("输入6----可查询某一科的成绩排名 \n");
	printf("输入7----可查询某一学生的各科成绩\n");
	printf("输入8----可查询所有不及格科目超过两科的学生名单\n");
	printf("输入9----可查看当前所有学生成绩名单\n");
	printf("输入0----可直接退出\n"); 
	printf("请输入：");
	scanf("%d",&choice); 
	while(choice!=0)
	{
		switch (choice)
			{
				case 1:														//1-录入学生的基本信息 
					head = creat();											
					break;
				case 2:														//2-录入学生的单科成绩
					head = luru(head);
					break;
				case 3:														//3-增加学生基本信息 
					zengjia(head);
					break;
				case 4:														//4-删除学生基本信息			
					head = shanchu(head);
					break;
				case 5:														//5-修改学生基本信息 
					head = xiugai(head);
					break;
				case 6:														//6-查询某一科的成绩排名 
					cxpaiming(head);
					break;
				case 7:														//7-查询某一学生的各科成绩
					chaxunchengji(head);
					break;
				case 8:														//8-查看所有不及格科目超过两科的学生名单 
					bujige(head);
					break;
				case 9:														//9-查看当前所有学生成绩名单
					put(head);
					break;
				default :
					printf("\n错误！\n");
					break;
			}
			printf("\n输入1----可录入学生的基本信息\n");
			printf("输入2----可录入学生的单科成绩\n");
			printf("输入3----可增加学生的信息\n");
			printf("输入4----可删除学生基本成绩\n");
			printf("输入5----可修改学生基本成绩\n");
			printf("输入6----可查询某一科的成绩排名 \n");
			printf("输入7----可查询某一学生的各科成绩\n");
			printf("输入8----可查询所有不及格科目超过两科的学生名单\n");
			printf("输入9----可查看当前所有学生成绩名单\n");
			printf("输入0----可直接退出\n"); 
			printf("输入0可直接退出\n"); 
			getchar();
			printf("请输入：");
			scanf("%d",&choice);
	}
	printf("谢谢~\n");
	return 0;
}
