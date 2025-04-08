int trackPlayerRanks(int ranked [],int n,int player[],int m,int result[]){
    int s=0,i;
    for(i=0;i<m;i++){
        s=s+player[i];
    } 
    for(i=0;i<n;i++){
        if(ranked[i]>s){
            break;
        }
    }
    return i;
}