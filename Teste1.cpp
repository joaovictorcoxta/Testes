#include<stdio.h>
#include<stdlib.h>
int main()
{
	 
	 int taxa,qtdProp;
	 float aluguel=0;
	 
	 printf("Digite a quantidade de proprietários e o valor do aluguel :\n");
	 scanf("%d %f",&qtdProp,&aluguel);
	 //a taxa de administração de 8%, ja foi inserida com o imposto de renda caso o valor seja maior que R$ 1903,98
	 if(aluguel>1903.98){
	 	if(aluguel<2826.66)
	 		aluguel*=0.845;
		else if(aluguel<3751.06)
	 		aluguel*=0.77;
	 	else if(aluguel<4664.69)
	 		aluguel*=0.695;
	 	else if(aluguel>=4664.69)
	 		aluguel*=0.645;
	 			
	 }else
	 aluguel*=0.92;
	 
	 aluguel/=qtdProp;
	 
	 for(int i=0;i<qtdProp;i++)
	 	printf("%d %.2f ",qtdProp,aluguel);
	
	 
	 
}
