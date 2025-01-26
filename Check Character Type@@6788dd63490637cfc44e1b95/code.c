#include <stdio.h>
void main(){
    int ch;
    scanf("%c",&ch);
    if (ch=='a'|| ch=='i' ||ch=='o'|| ch=='u' ||ch=='e'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}