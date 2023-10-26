#include <stdio.h>

int main() {
	float m[100][6]={0},mo,dm=0;
	int i=1,c,n=1,j;
	while(n!=0){
		printf("Transaccion numero %d:\n\n",i);
		i++;
		printf("Ingrese su numero de cliente: ");
		scanf("%d",&n);
		if(n==0){
			break;
		}
		while(n<1 || n>100){
			printf("Ingreso invalido\n");
			printf("Ingrese su numero de cliente nuevamente: ");
			scanf("%d",&n);
		}
		printf("\nIngrese un codigo de transaccion\n");
		printf("(1-Deposito 2-Extraccion 3-Comisiones deducidas 4-Intereses acreditados): ");
		scanf("%d",&c);
		while(c<1 || c>4){
			printf("Ingreso invalido\n");
			printf("Ingrese un codigo de transaccion nuevamente: ");
			scanf("%d",&c);
		}
		printf("Ingrese el monto de la operacion: ");
		scanf("%f",&mo);
		if(c==1){
			m[n-1][1]+=mo;
			m[n-1][5]+=mo;
		}
		if(c==2){
			m[n-1][2]+=mo;
			m[n-1][5]-=mo;
		}
		if(c==3){
			m[n-1][3]+=mo;
			m[n-1][5]-=mo;
		}
		if(c==4){
			m[n-1][4]+=mo;
			m[n-1][5]+=mo;
		}
		printf("Transaccion exitosa\n\n\n");
	}
	for(i=0;i<=99;i++){
		m[i][0]=i+1;
	}
	printf("\nIngresos finalizados\n\n");
	printf("Numero de cliente    Total depositos    Total extracciones    Total comisiones    Total intereses          Saldo\n");
	for(i=0;i<=99;i++){
		printf("      ");
		for(j=0;j<=5;j++){
			if(j==0){
				printf("%.0f                 ",m[i][j]);
			}
			else{
				printf("%.2f                 ",m[i][j]);
			}
			if(j==1){
				if(m[i][j]>dm){
					dm=m[i][j];
				}
			}
		}
		printf("\n");
	}
	printf("\nEl deposito mas alto es de $%.2f\n\n",dm);
	printf("El, o los, clientes con este deposito son los numero: ");
	for(i=0;i<=99;i++){
		if(m[i][1]==dm){
			printf("%.0f ",m[i][0]);
		}
	}
	return 0;
}
