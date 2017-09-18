#include<stdio.h>

int main()
{
	int times=0;
	int i;
	int mousex=0;
	int mousey=0;
	int posx=0;
	int posy=0;
	int hits=0;
	int missed=0;
	int row,col;
	printf("请输入你要打老鼠的次数：\n");
	scanf("%d",&times);
	printf("ooo\nooo\nooo\n");
	for(i=1;i<=times;i++)
	{
		mousex=rand()%3+1;
		mousey=rand()%3+1;
		do
		{
			printf("请输入锤子的坐标:\n");
			scanf("%d %d",&posx,&posy);
		}while(posx<1||posx>3||posy<1||posy>3);
		if(mousex==posx&&mousey==posy)
			hits++;
		else
			missed++;
		for(row=1;row<=3;row++)
		{
			for(col=1;col<=3;col++)
			{
				if(row==posy&&col==posx)
					printf("@");
				else if(row==mousey&&col==mousex)
					printf("$");
				else
					printf("o");
			}
			printf("\n");
		}
		if(mousex==posx&&mousey==posy)
			printf("亲，能轻点吗？好痛呀...\n");
		else
			printf("就你这个熊样，撒泡尿照照自己，我在%d,%d位置\n",mousex,mousey);
		printf("击中%d次，击错%d次\n",hits,missed);
	}
	return 0;
}
