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
#define mal(type,size)  malloc(size*sizeof(type))
#define rep(i,N)    for(int i=0;i<N;i++)
#define rep2(i,N,M) for(int i=N;i<M;i++)

typedef long long ll;

char *string_scan(char *S){
    S=mal(char,10);
    int i=0;
    while(1){
        if(i==9){
            S=realloc(S,10);
        }
        scanf("%c",&S[i]);
        if(S[i]=='\0'){
            break;
        }
        i++;
    }
    return S;
}

signed main(void){
    int A,B;
    scanf("%d %d",&A,&B);
    int tmp=A/100;
    A-=tmp*100;
    int tmp2=A/10;
    A-=tmp2*10;
    int tmp3=A;
    int sum1=tmp+tmp2+tmp3;

    tmp=B/100;
    B-=tmp*100;
    tmp2=B/10;
    B-=tmp2*10;
    tmp3=B;

    int sum2=tmp+tmp2+tmp3;

    if(sum1>=sum2){
        printf("%d\n",sum1);
    }else{
        printf("%d\n",sum2);
    }
    return 0;
}