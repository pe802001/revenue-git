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
     	float rate=Revenue[i][j]/Revenue[i-1][j]*100;            //�p���T�~�C���禬�۹��e�@�~�ת������v�A��쬰% 
     	printf("%.2f%% ",rate);									  
	 }
	printf("\n");												//����A�P�@�~�L�b�P�@�� 
	}


    
    for(int a=0;a<4;a++)										//�L�X��|�~�C�u�禬�θӦ~�`�禬�A�~�j�� 
    {
    	for(int b=0;b<12;b+=3)                       			//��j�� 
    	{
    		for(int c=0;c<3;c++)								//�p��C�T�Ӥ� 
				season+=Revenue[a][b+c];						//�u�禬�֥[ 
    		printf("��%d�u:%.2f   ",b/3+1,season);				//��/3+1�����u 
    		sum+=season;										//�~�禬=�֥[�C�u 
			season=0;											//�u�禬�k�s 
		}
		printf("�`�禬:%.2f   ",sum);							//��֥ܲ[�C�u�����G 
		sum=0;													//�~�禬�k�s 
		printf("\n");
	}
	
	system("pause");
    return 0;
}
