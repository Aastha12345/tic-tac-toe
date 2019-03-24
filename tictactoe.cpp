/*TIC-TAC-TOE*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char player[2][10];
//--------------------1st Window-------------------------------------------
void window1()
{
	int op;
	printf("Rules:\n1.Both Players Enter the names");
	printf("\n2.The turns alternate");
	printf("\n3.First to complete a row,column or diagonal wins");
	printf("\nPress any key to Play");
	getch();
	clrscr();
	printf("Enter the name of PLAYER 1");
	scanf("%s",player[0]);
	printf("Enter the name of PLAYER 2");
	scanf("%s",player[1]);
	clrscr();
}

//--------------------Board-------------------------------------------------
char a[3][3]={
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	     };
//--------------------Board_Layout------------------------------------------                      D

void drawboard()
{
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		printf("| \t| \t|");
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("|%c\t",a[i][j]);
		}
		printf("\n");
		printf("-------------------");
		printf("\n");
	}
}

//-------------------Check_If_Someone_Won------------------------------------

void checkwin()
{
//-------------------0 wins--------------------------------------------------


if(a[0][0]=='0' && a[1][1]=='0'&& a[2][2]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[0][0]=='0' && a[1][0]=='0'&& a[2][0]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);

}
if(a[0][1]=='0' && a[1][1]=='0'&& a[2][1]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[0][0]=='0' && a[1][2]=='0'&& a[2][2]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[0][0]=='0' && a[0][1]=='0'&& a[0][2]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[1][0]=='0' && a[1][1]=='0'&& a[1][2]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[2][0]=='0' && a[2][1]=='0'&& a[2][2]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}
if(a[0][2]=='0' && a[1][1]=='0'&& a[2][0]=='0')
{
	clrscr();
	printf("0 wins");
	getch();
	exit(1);
}

//--------------------X wins-------------------------------------------------

if(a[0][0]=='x'&& a[1][1]=='x' &&a[2][2]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[0][0]=='x'&& a[1][0]=='x' &&a[2][0]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[0][1]=='x'&& a[1][1]=='x' &&a[2][1]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[0][0]=='x'&& a[1][2]=='x' &&a[2][2]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[0][0]=='x'&& a[0][1]=='x' &&a[0][2]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[1][0]=='x'&& a[1][1]=='x' &&a[1][2]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[2][0]=='x'&& a[2][1]=='x' &&a[2][2]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
if(a[0][2]=='x'&& a[1][1]=='x' &&a[2][0]=='x')
{
	clrscr();
	printf("X wins");
	getch();
	exit(1);
}
}

//----------------------GET INPUT--------------------------------------------
void get_input()
{
	int count=0;
	char k;
	while(count<9)
	{
		int i=0,j=0,FLAG,Turn;

		//Turn of which player
		if(count%2==0)
		{
			Turn=1;
		}
		else
		{
			Turn=2;
		}


		printf("\nTurn of player %d",Turn);
		printf("\nPlayer Name:%s",player[Turn-1]);
		printf("\nSelect the position");
		scanf("%c",&k);
		FLAG=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(k==a[i][j])
				{
					FLAG=1;
					if(count%2==0)
					a[i][j]='x';
					else
					a[i][j]='0';
				}
			}
		}
		if(FLAG==1)
		{
			count++;
		}
		else
		{
			printf("\n\nWARNING:Enter the right choice.\n");
			printf("Press any key to continue.\n");
			getch();
		}
		system("cls");
		drawboard();
		checkwin();
	}
}

int main()
{
	clrscr();
	window1();
	drawboard();
	get_input();
getch();

}