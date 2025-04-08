int trackScores(int scores[],int n,int result[]){
    int i,high=0,low=0;
    for(i=1;i<n;i++){
        int r=score[0];
        if(score[i]>r){
            high++;
        }
        else if(score[i]<r){
            low++;
        }
        return low,high;
    }
}