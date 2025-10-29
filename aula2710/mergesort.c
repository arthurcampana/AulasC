mergeSort(int array[], int left, int right){
    if(left < right){
        int mid = (left + right)/2;
        mergeSort(array,left,mid);
        mergeSort(array,mid+1,right);
    }
}