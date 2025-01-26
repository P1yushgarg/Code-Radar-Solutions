#include <stdio.h>
void main(){
    int ch;
    scanf("%c",&ch);
    if (ch=='i'|| ch=='a' ||ch=='o'|| ch=='u' ||ch=='e'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}