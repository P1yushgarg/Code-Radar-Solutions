int trackScores(int scores[],int n,int result[]){
    int high=scores[0];
    int low=scores[0];
    result[0] = 0; // Count of high score breaks
    result[1] = 0; // Count of low score breaks

    for(int i=1;i<n;i++){
        if(high<scores[i]){
            high=scores[i];
            result[0]++;
        }
        else if(low>scores[i]){
            low=scores[i];
            result[1]++;
        }
    }
}