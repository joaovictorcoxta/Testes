#include<stdio.h>
#include<stdlib.h>
int main()
{
	 
	 int qtdProp,taxa;
	 float aluguel=0,taxa1;
	 
	 printf("Digite a quantidade de proprietários, o valor do aluguel e a taxa administrativa : \n");
	 scanf("%d %f %d",&qtdProp,&aluguel,&taxa);
	 taxa1=taxa/100;
	 
	 if(aluguel>1903.98){
	 	if(aluguel<2826.66)
	 		aluguel=aluguel*(0.925-taxa1);
		else if(aluguel<3751.06)
	 		aluguel=aluguel*(0.85-taxa1);
	 	else if(aluguel<4664.69)
	 		aluguel=aluguel*(0.775-taxa1);
	 	else if(aluguel>=4664.69)
	 		aluguel=aluguel*(0.725-taxa1);
	 			
	 }else
	 aluguel*taxa1;
	 
	 aluguel/=qtdProp;
	 printf("%d ",qtdProp);
	 for(int i=0;i<qtdProp;i++)
	 	printf(" %.2f  ",aluguel);
	printf("%d",taxa);
	
	 
	 
}
