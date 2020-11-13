#include<stdio.h>
#include<stdlib.h>
int main()

{
	//数组u确保不会重复下棋 
	int u[9]={0};
	
	//数组x是胜利条件的判断符号
	int x[9]={11,12,13,14,15,16,17,18,19};
	
	//p代表棋盘的九宫格
	char p1='\0',p2='\0',p3='\0',p4='\0',p5='\0',p6='\0',p7='\0',p8='\0',p9='\0';
	
	//n是用户想下的棋盘格，p是回合判断符号，i是总回合数判断符号
	int n,p=1,i=0;
	
	while(i<10)//当回合数小于9，继续运行 
	{
		if(i!=0)
		system("cls");//清屏 
		printf("\t\t%2c丨%2c丨%2c\n",p1,p2,p3);//展示棋盘与棋子 
		printf("\t\t一十一十一\n");
		printf("\t\t%2c丨%2c丨%2c\n",p4,p5,p6);//   \t相当于tab键 
		printf("\t\t一十一十一\n");
		printf("\t\t%2c丨%2c丨%2c\n",p7,p8,p9);
		printf("\n");
		
		printf("\t\t1  2  3\n\t\t4  5  6\n\t\t7  8  9\n");//展示数字代表的棋盘格 
		
		//判断是否有一方胜利 
		if((x[6]==x[7]&&x[7]==x[8])||(x[3]==x[4]&&x[4]==x[5])||(x[0]==x[1]&&x[1]==x[2])||(x[0]==x[3]&&x[3]==x[6])||(x[1]==x[4]&&x[4]==x[7])||(x[2]==x[5]&&x[5]==x[8])||(x[0]==x[4]&&x[4]==x[8])||x[2]==x[4]&&x[4]==x[6]) {
			if(p==-1) {
				printf("O赢了！\n");
				break;
			}
			else {
				printf("X赢了！\n");
				break;
			}
			i=10;//胜利则离开循环 
		}
		
		if(i==9) {
			printf("平局。\n");//平局判断 
			break;
		}
		
		if(p==1) {
			printf("轮到 O 的回合，");//展示当前是谁的回合 
		}
		else  {
			printf("轮到 X 的回合，");
		}
		
		printf("请按数字1~9选择你要下的地方：\n");//提示下棋 
		scanf("%d",&n);
		
		switch(n) {//棋盘具体的行动 
			case 1://棋盘1号 
				if(u[n-1]==0) {//如果没有下过，允许下棋 
					if(p==1) {//如果轮到O，下O 
						p1='O'; 
						x[n-1]=1;//O的胜利判断符号是x=1 
					}
					else {
						p1='X'; //如果轮到X，下X 
						x[n-1]=2;//X的胜利判断符号是x=2 
					}
						
					u[n-1]=1;//代表该格子被使用过 
					p=-p;//交换回合 
					i++;//回合计数器+1 
				} break;//结束选择 
			
			case 2:
				if(u[n-1]==0) {
					if(p==1) {
						p2='O'; 
						x[n-1]=1;
					}
					else {
						p2='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
			
			case 3:
				if(u[n-1]==0) {
					if(p==1) {
						p3='O'; 
						x[n-1]=1;
					}
					else {
						p3='X'; 
						x[n-1]=2;	
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
			
			case 4:
				if(u[n-1]==0) {
					if(p==1) {
						p4='O'; 
						x[n-1]=1;
					}
					else {
						p4='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
			
			case 5:
				if(u[n-1]==0) {
					if(p==1) {
						p5='O'; 
						x[n-1]=1;
					}
					else {
						p5='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
				
			case 6:
				if(u[n-1]==0) {
					if(p==1) {
						p6='O'; 
						x[n-1]=1;
					}
					else {
						p6='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
				
			case 7:
				if(u[n-1]==0) {
					if(p==1) {
						p7='O'; 
						x[n-1]=1;
					}
					else {
						p7='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
				
			case 8:
				if(u[n-1]==0) {
					if(p==1) {
						p8='O'; 
						x[n-1]=1;
					}
					else {
						p8='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
				
			case 9:
				if(u[n-1]==0) {
					if(p==1) {
						p9='O'; 
						x[n-1]=1;
					}
					else {
						p9='X'; 
						x[n-1]=2;
					}
						
					u[n-1]=1;
					p=-p;
					i++;
				} break;
			}//switch结尾 
	}//while结尾 
	return 0;
}
