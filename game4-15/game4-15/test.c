#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"game.h"
void menu()
{
printf("********************\n");
printf("***    1.play   ***\n");
printf("***   0.exit  ***\n");
printf("********************\n");

}
void game()
	
{
	char ret='0';
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
while(1)
{
PlayerMove(board,ROW,COL);
DisplayBoard(board,ROW,COL);
ret =CheckWin(board,ROW,COL);
if(ret!='C')
	break;
ComputerMove(board,ROW,COL);
DisplayBoard(board,ROW,COL);
ret= CheckWin(board,ROW,COL);
if(ret!='C')
	break;
}
if(ret='*')
{
printf("πßœ≤ƒ„£¨ƒ„”Æ¡À!\n");
}
else if(ret='#')
{
printf("µÁƒ‘”Æ!\n");
}
else if(ret='Q')
{
printf("∆Ωæ÷!\n");
}
}
void test()
{
int input=0;
srand((unsigned int)time(NULL));
menu();
printf("«Î—°‘Ò:");
scanf("%d",&input);
do
{
switch(input)
{
case 1:
	game();
break;
 case 0:
break;
 default:
break;
}
}while(input);
}
int main()
{
test();
system ("pause");
return 0;
}