#include<stdio.h>

int arr[] = {1, 2, 45, 67, 99, 100, 112, 234, 435, 870};

int lengt = 10;

    int linearSearch(int search){
        for(int i =0 ; i < lengt; i++){
            if(arr[i] == search){
                return i;
            }
        }
        return -1;
	}
    
    
    int binarySearch(int search){
    	
    	int low = 0;
    	int high = lengt-1;
    	
    	while(low <= high){
    		int mid = (low+high)/2;
    		if(arr[mid] == search) return mid;
    		else if(search < arr[mid]) high = mid-1;
    		else if(search > arr[mid]) low = mid+1;
		}
		
		return -1;
	}

int main(){
    int resultIndex = binarySearch(100);
    if(resultIndex == -1) printf("hasil tidak ditemukan");
    else printf("index = %d", resultIndex);

    return 0;
}
