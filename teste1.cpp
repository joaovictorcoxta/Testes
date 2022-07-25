#include<stdio.h>
int main(){
	int hrs=0,min=0,sec=0;
	printf("Digite os segundos : \n");
	scanf("%d",&sec);
	
	if(sec>=60){
		min=sec/60;
		sec%=60;
		if(min>=60){
			hrs=min/60;
			min%=60;
		}
	}
	printf("%d : %d : %d",hrs,min,sec);
}
