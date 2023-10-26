#include <stdio.h>

int main() {
	int m[3][3],i,j;
	for(i=1;i<=2;i=i+2){
		printf("Columna numero %d:\n",i+1);
		for(j=0;j<=2;j++){
			printf("Ingrese elemento perteneciente a la fila %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i=i+2){
		printf("Columna numero %d:\n",i+1);
		for(j=0;j<=2;j++){
			printf("Ingrese elemento perteneciente a la fila %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("Ingresos finalizados\n\n");
	printf("Matriz final:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
