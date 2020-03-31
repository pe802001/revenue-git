#include<stdio.h>
#include<stdlib.h>

int Revenue[4][12]={{1,2,3,4,5,6,7,8,9,1,2,5},{5,4,3,8,5,6,2,8,9,5,2,5},{2,2,4,4,5,5,7,5,9,1,4,5},{4,5,5,4,5,4,7,4,9,4,2,5}};
float season=0;
float sum=0;
int main(void) 
{
	
	for(int i=1;i<4;i++)
    {
     for(int j=0;j<12;j++)
     {
     	float rate=Revenue[i][j]/Revenue[i-1][j]*100;            //計算近三年每月營收相對於前一年度的成長率，單位為% 
     	printf("%.2f%% ",rate);									  
	 }
	printf("\n");												//換行，同一年印在同一行 
	}


    
    for(int a=0;a<4;a++)										//印出近四年每季營收及該年總營收，年迴圈 
    {
    	for(int b=0;b<12;b+=3)                       			//月迴圈 
    	{
    		for(int c=0;c<3;c++)								//計算每三個月 
				season+=Revenue[a][b+c];						//季營收累加 
    		printf("第%d季:%.2f   ",b/3+1,season);				//月/3+1等於當季 
    		sum+=season;										//年營收=累加每季 
			season=0;											//季營收歸零 
		}
		printf("總營收:%.2f   ",sum);							//顯示累加每季的結果 
		sum=0;													//年營收歸零 
		printf("\n");
	}
	
	system("pause");
    return 0;
}
