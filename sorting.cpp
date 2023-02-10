#include<stdio.h>
 
int arr[] = {47,45,34,10,2};

int length = 5;


//buble sort
void bubleSort(){
	bool swapped = false;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < length-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped == false) break;
	}
}

void print(){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//selection sort
void sectionSort(){
	for(int i = 0; i < length; i++){
		int min = i;
		for(int j = i+1; j < length; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	
}


int main(){
	
	
	//bubleSort();
	sectionSort();
	print();
	
	return 0;
}
