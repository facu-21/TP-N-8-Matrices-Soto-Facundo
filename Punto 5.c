#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	int m[3][6]={0},i,j,k,nn,r,c,t,n[2][43]={0};
	
	for(i=0;i<=42;i++){
		n[1][i]=i;
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=5;j++){
			c=0;
			m[i][j]=rand()%42;
			for(k=0;k<=j;k++){
				if(m[i][j]==m[i][k]){
					c++;
				}
				if(c==2){
					m[i][j]=rand()%42;
					c=0;
					k=-1;
				}
			}
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=5;j++){
			n[0][m[i][j]]++;
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=5;j++){
			for(k=0;k<=5;k++){
				if(m[i][k]>m[i][j]){
					t=m[i][k];
					m[i][k]=m[i][j];
					m[i][j]=t;
				}
			}
		}
	}
	printf("Sorteos:\n");
	for(i=0;i<=2;i++){
		printf("Sorteo %d: ",i+1);
		for(j=0;j<=5;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	printf("\nIngrese un numero N (entre 0 y 42): ");
	scanf("%d",&nn);
	while(nn<0 || nn>42){
		printf("Ingreso invalido\n");
		printf("Ingrese un numero N nuevamente (entre 0 y 42): ");
		scanf("%d",&nn);
	}
	printf("El numero %d se repite %d veces\n\n",nn,n[0][nn]);
	for(i=0;i<=42;i++){
		for(j=0;j<=42;j++){
			if(n[0][j]<n[0][i]){
				t=n[1][j];
				n[1][j]=n[1][i];
				n[1][i]=t;
				t=n[0][j];
				n[0][j]=n[0][i];
				n[0][i]=t;
			}
		}
	}
	r=n[0][0];
	printf("El, o los, numeros mas repetidos son: ");
	for(i=0;i<=20;i++){
		if(n[0][i]==r){
			printf("%d ",n[1][i]);
		}
	}
	printf("\n");
	return 0;
}

