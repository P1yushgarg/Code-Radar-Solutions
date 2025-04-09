int compressString(char str[],int compressed){
    compressed=0;
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;str[i]!='\0';j++){
            if(str[i]==str[j]){
                compressed++;
            }
        }
    }
}
