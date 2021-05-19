#include<stdio.h>
#include<cs50.h>
int main(void){
	int choice;
	int n,i,j,k;
	int m =1;
	choice = get_int("Enter type of pattern (1 or 2) ");
	if(choice==1){
	    n = get_int("Number of rows");  
		for(int i=n;i>=1;i--)  
			{  
			for(int j=1;j<=i;j++)  
				{  
				printf("#");  
				}  
			printf("\n");  
			}  
	          }
	 else{
		 n = get_int("Number of rows");  
		 for(int i=n;i>=1;i--)  
			{  
				for(int j=1;j<=i-1;j++)  
				{  
					printf(" ");  
				}  
				for(int k=1;k<=m;k++)  
				{  
					printf("#");  
				}  
			printf("\n");  
			m++;  
			}
		}
	}
		
