#include <stdio.h>

int main() {
	int m[3][3],i,j,k,l,t;
	for(i=0;i<=2;i++){
		printf("Fila numero %d:\n",i+1);
		for(j=0;j<=2;j++){
			printf("Ingrese elemento perteneciente a la columna numero %d: ",j+1);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("Ingresos finalizados\n\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			for(k=0;k<=2;k++){
				for(l=0;l<=2;l++){
					if(m[k][l]>m[i][j]){
						t=m[i][j];
						m[i][j]=m[k][l];
						m[k][l]=t;
					}
				}
			}
		}
	}
	printf("Matriz ordenada:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
