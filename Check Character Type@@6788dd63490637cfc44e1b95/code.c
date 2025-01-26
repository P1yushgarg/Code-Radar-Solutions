#include <stdio.h>
void main(){
    int ch;
    scanf("%c",&ch);
    if (ch=='i'|| ch=='a' ||ch=='o'|| ch=='u' ||ch=='e'){
        printf("Vowel");
    }
    else if(ch==1 || ch==2 || ch==3 || ch==4 || ch==5 || ch==6 || ch==7 || ch==8 || ch==9 || ch==0){
        printf("Digit");
    }
    else if(ch=='@' || ch=='!' || ch=='#' || ch=='$' || ch=='%' || ch=='&' || ch=='*')
    {
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
}