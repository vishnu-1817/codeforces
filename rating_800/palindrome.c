// Input
//     The first line contains a single integer t(1≤t≤1000) — the number of test cases.

//     The only line of each test case contains a string s(2≤ | s |≤50) consisting of lowercase Latin letters.This string is a palindrome.

// Output
//     For each test case,
//     print YES if it is possible to rearrange the letters in the given string to get another palindrome.Otherwise, print NO.
#include<stdio.h>

int main(){

int t;
scanf("%d",&t);




for (int i = 0; i<t ; i++){
    int alpha[26];
    for (int i = 0;i<26;i++) alpha[i]=0;
    char s[500];
    scanf("%s",s);
    // printf("%s",s);

// counting the frequency of each letter
    int i = 0;
    while (s[i]!='\0'){
        alpha[(int) (s[i]-'a')] += 1;
        i++;

    }

// just printing the alpha
    // for (int i = 0; i<26;i++){
    //         printf("%d\n",alpha[i]);
    // }

    // counting the no. of letters with odd occurence

    int odd=0;

    for (int i = 0; i<26;i++){
        if (alpha[i]%2==1) odd+=1;

    }

    if (odd >1) printf("NO\n");
    else {
        


}



return 0;
}

