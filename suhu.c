#include<stdio.h>

int main(){
	
	int matrix[3][3];
	int jumlah;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(int i = 0; i <3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < 3; i++){
		jumlah += matrix[0][1];
	}


	printf("Hasil tambah matrix : %d", jumlah);
	
	return 0;
}
