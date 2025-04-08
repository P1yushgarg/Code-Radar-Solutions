int trackScores(int scores[],int n,int result[]){
    int i,high=0,low=0;
    for(i=1;i<n;i++){
        int r=scores[0];
        if(score[i]>r){
            result[high++];
        }
        else if(scores[i]<r){
            result[low++];
        }
    }
    return result;
}