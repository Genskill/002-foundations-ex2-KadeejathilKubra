#include<stdio.h>
#include<cs50.h>
int main(void){
	float check;
	float n1=get_float("side 1 ");
	float n2=get_float("side 2 ");
	float n3=get_float("side 3 ");
	if (n1 >= n2 && n1 >= n3){
        float large = n1;
        check = n2*n2 + n3*n3;
        if(check = (large*large))
			printf("Yes");
	}
	if (n2 >= n1 && n2 >= n3){
        float large = n2;
        check = n1*n1 + n3*n3;
        if(check = (large*large))
			printf("Yes");
	}
	if (n3 >= n1 && n3 >= n2){
        float large = n3;
        check = n1*n1 + n2*n2;
        if(check = (large*large))
			printf("Yes");
	}
  }
     
    
