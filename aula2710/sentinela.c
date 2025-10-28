int full_scan_sentinela(int vector[],int length, int searched){
    int i = 0;
    vector[length] = searched;
    do {
        if(vector[i] == searched) break;
        i++;
    } while (1);
    if(i<length) return i;
    return -1;
}