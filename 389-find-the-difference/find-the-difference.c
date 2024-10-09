char findTheDifference(char* s, char* t) {
    //int s_length = strlen(s);
    int xor_resultMissing = 0;
    //int t_length = strlen(t);
    int xor_resultAdded = 0; 
    for(int i = 0 ; s[i]!= '\0'  ; i++){
        xor_resultMissing ^= (int)s[i] ;
    }
    for(int j = 0 ; t[j]!= '\0' ; j++){
        xor_resultAdded ^= (int)t[j];    
    }
    return (xor_resultAdded ^ xor_resultMissing); 
}