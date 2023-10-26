#include <stdio.h>

int main() {
	int m[5][5],i,j;
	printf("Elementos de la diagonal principal:\n");
	for(i=0;i<=4;i++){
		printf("Ingrese elemento perteneciente a la fila %d columna %d: ",i+1,i+1);
		scanf("%d",&m[i][i]);
	}
	printf("\nElementos del triangulo superior:\n");
	for(i=0;i<=3;i++){
		for(j=1;j<=4;j++){
			if(i==1&&j==1){
				j++;
			}
			if(i==2&&j==1){
				j=j+2;
			}
			if(i==3&&j==1){
				j=j+3;
			}
			printf("Ingrese elemento perteneciente a la fila %d columna %d: ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nElementos del triangulo inferior:\n");
	for(i=1;i<=4;i++){
		for(j=0;j<=3;j++){
			printf("Ingrese elemento perteneciente a la fila %d columna %d: ",i+1,j+1);
			scanf("%d",&m[i][j]);
			if(i==1&&j==0){
				j=j+3;
			}
			if(i==2&&j==1){
				j=j+2;
			}
			if(i==3&&j==2){
				j++;
			}
		}
	}
	printf("\nIngresos finalizados\n\n");
	printf("Matriz final:\n");
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
