#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#define DBG_INT(arg) fprintf(stderr,"*DEBUG* " #arg "...%d\n",arg)
#define DBG_DOUBLE(arg) fprintf(stderr,"*DEBUG* " #arg "...%f\n",arg)
#define DBG_CHAR(arg) fprintf(stderr,"*DEBUG* " #arg "...%c\n",arg)
#define DBG_STRING(arg) fprintf(stderr,"*DEBUG* " #arg "...%s\n",arg)

int main(void){
    unsigned long long int A,B,C,K;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&K);
    unsigned long long int takahashi,nakahashi,hikuhashi;
    unsigned long long int tmp_takahashi,tmp_nakahashi,tmp_hikuhashi;
    takahashi=A;
    nakahashi=B;
    hikuhashi=C;
    for(int i=1;i<=K;i++){
        tmp_takahashi=nakahashi+hikuhashi;
        tmp_nakahashi=takahashi+hikuhashi;
        tmp_hikuhashi=takahashi+nakahashi;
        takahashi=tmp_takahashi;
        nakahashi=tmp_nakahashi;
        hikuhashi=tmp_hikuhashi;
    }
    int ans=takahashi-nakahashi;
    if(pow(10,18)<ans){
        printf("Unfair");
    }else{
        printf("%d\n",ans);
    }
}