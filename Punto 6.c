#include <stdio.h>

int main() {
	int m[10][2],i,j,c=9,t;
	for(i=0;i<=9;i++){
		printf("Ingrese su numero de socio: ");
		scanf("%d",&m[i][0]);
		while(m[i][0]<0){
			printf("Ingreso invalido\n");
			printf("Ingrese su numero de socio nuevamente: ");
			scanf("%d",&m[i][0]);
		}
		if(m[i][0]==0){
			c=i-1;
			i+=10;
		}
		else{
			printf("Ingrese su edad: ");
			scanf("%d",&m[i][1]);
			while(m[i][1]<1){
				printf("Ingreso invalido\n");
				printf("Ingrese su edad nuevamente: ");
				scanf("%d",&m[i][1]);
			}
		}
		printf("\n");
	}
	printf("Ingresos finalizados\n\n");
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if(m[j][1]>m[i][1]){
				t=m[i][1];
				m[i][1]=m[j][1];
				m[j][1]=t;
				t=m[i][0];
				m[i][0]=m[j][0];
				m[j][0]=t;
			}
		}
	}
	printf("Socios ordenados por edad:\n\n");
	for(i=0;i<=c;i++){
		printf("Socio numero %d, edad %d\n",m[i][0],m[i][1]);
	}
	return 0;
}
