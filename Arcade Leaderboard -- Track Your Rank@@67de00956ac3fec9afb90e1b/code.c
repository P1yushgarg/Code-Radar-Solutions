int trackPlayerRanks(int ranked [],int n,int player[],int m,int result[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(player[0]<ranked[i]){
                printf("%d",i+1);
            }
        }
    }
    
}