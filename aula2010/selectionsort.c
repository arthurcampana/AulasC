
#define FALSE 0
#define TRUE 1

void selectionSort(int vector[], int length) {  
    int i, j, menor;                              
	for(i = 0; i < length - 1; i++) {
		menor = i;
		for(j = i + 1; j < length; j++) {
			if(vector[j] < vector[menor]) {
				menor = j;
			}
		}
		if(vector[i] > vector[menor]) {
			int tmp = vector[menor];  
			vector[menor] = vector[i]; 
			vector[i] = tmp;           
		}
	}
}
