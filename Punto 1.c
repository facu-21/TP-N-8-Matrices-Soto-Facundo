#include <stdio.h>
//Faltan funciones.
int main() {
	int m[6][5]={0},i,j,f=1,c;
	while(f!=0){
		printf("Ingrese numero de fila: ");
		scanf("%d",&f);
		if(f==0){
			f=0;
		}
		else{
			while(f<1||f>6){
				printf("Ingreso invalido\n");
				printf("Ingrese fila nuevamente: ");
				scanf("%d",&f);
			}
			printf("Ingrese numero de columna: ");
			scanf("%d",&c);
			while(c<1||c>5){
				printf("Ingreso invalido\n");
				printf("Ingrese columna nuevamente: ");
				scanf("%d",&c);
			}
			printf("Ingrese valor a asignar: ");
			scanf("%d",&m[f-1][c-1]);
			printf("Ingreso exitoso\n\n");
		}
	}
	printf("Ingresos finalizados\n\n");
	printf("Matriz final:\n");
	for(i=0;i<=5;i++){
		for(j=0;j<=4;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
