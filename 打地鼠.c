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
	printf("��������Ҫ������Ĵ�����\n");
	scanf("%d",&times);
	printf("ooo\nooo\nooo\n");
	for(i=1;i<=times;i++)
	{
		mousex=rand()%3+1;
		mousey=rand()%3+1;
		do
		{
			printf("�����봸�ӵ�����:\n");
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
			printf("�ף�������𣿺�ʹѽ...\n");
		else
			printf("������������������������Լ�������%d,%dλ��\n",mousex,mousey);
		printf("����%d�Σ�����%d��\n",hits,missed);
	}
	return 0;
}
