int countSegments(char * s){
    int count = 0, j = 0;
        
    for(int i = 0; i < strlen(s); i++) {
        if(*(s+i) == ' ') {
            if(i != j) count ++;
            j = i + 1;
        } else if(i == strlen(s)-1) {
            count ++;
        }
    }
        
    return count;
}
