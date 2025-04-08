int trackScores(int scores[],int n,int result[]){
    int i,high=0,low=0;
    for(i=1;i<n;i++){
        int r=scores[0];
        if(scores[i]>r){
            high++;
            result[0]=high;
        }
        else if(scores[i]<r){
            low++;
            result[1]=low;
        }
    }
    return result;
}