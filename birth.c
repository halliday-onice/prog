#include <stdio.h>

int main(){
	char bolo[101][101];
	int happy=0;
	int n;

	scanf("%d",&n);


	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j)
			scanf(" %c",&bolo[i][j]);
	}

	for(int i=0;i<n;++i){ //
		for(int j=0;j<n;++j)
			if(bolo[i][j]=='C'){
				for(int k=j+1;k<n;++k){ // estou andando com a couluna, aqui estou deixando a linha constante
					if(bolo[i][k] =='C'){
						happy++;
					}
				}
				for(int k=i+1;k<n;++k){ // estou andando com a linha, aqui estou deixando a coluna constante
					if(bolo[k][j] =='C'){
						happy++;
					}

				}
			}
	}






	printf("%d\n",happy);

	return 0;
}
