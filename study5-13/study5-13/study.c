#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//´òÓ¡Ñî»ÔÈý½Ç
                      /*   1
                         1   1
                       1   2   1
                     1   3   3   1
                   1   4   6   4   1
                 1   5   10  10  5   1
               1   6   15  20  15  6   1
             1   7   21  35  35  21  7   1   
           1   8   28  56  70  56  28  8   1   
         1   9   36  84  126 126 84  36  9   1   
       1   10  45  120 210 252 210 120 45  10  1   
     1   11  55  165 330 462 462 330 165 55  11  1    
   1   12  66  220 495 792 924 792 495 220 66  12  1*/
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;
//			if(i==j)
//				arr[i][j] = 1;
//			if(i>1 && j>0)
//			{
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////
int main()
{  
	int arr[10][10]={0};
	int i=0;
	int j=0;
	for(i=0;i<10;i++)
	{
	for(j=0;j<10;j++)
	{
	if(j==0)
		arr[i][j]=1;
	if(i==j)
arr[i][j]=1;
	if(i>1&&j>0)
	{
	arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
	}
	}
	}
	for (i = 0; i <10; i++)
	{
		for ( j = 0; j <5; j++)
		{
			printf(" ");
		}
	}
for(i=0;i<10;i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
