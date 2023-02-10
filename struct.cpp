#include<stdio.h>

struct rectangle{
	int length;
	int width;
};

int main(){
	struct rectangle kotak1 = {
		50,10
	};
	
	printf("%d", kotak1.length * kotak1.width);
	
	return 0;
	
}
