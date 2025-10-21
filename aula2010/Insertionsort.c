void insertionSort(int vector[], int length){
    int i,j, pivot,temp;
    for(i = 1; i< length; i++){
        pivot = i;
        if(vector[pivot] < vector[pivot - 1]){
            temp = vector[pivot];
            for(j = pivot - 1; temp < vector[j]; j--){
                vector[j + 1] = vector[j];
            }
            vector[j + 1] = temp;
        }
    }
}