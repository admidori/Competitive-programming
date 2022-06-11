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
        if(S[i]=='\0'||S[i]=='\n'){
            break;
        }
        i++;
    }
    return S;
}

signed main(void){
    int N;
    scanf("%d",&N);
    char **S;
    S=mal(char*,N);
    rep(i,N){
        S[i]=mal(char,N);
    }
    rep(i,N){
        scanf("%s",S[i]);
    }
    int AC=0,WA=0,TLE=0,RE=0;
    rep(i,N){
        if(strcmp(S[i],"AC")==0){
            AC++;
        }
        if(strcmp(S[i],"WA")==0){
            WA++;
        }
        if(strcmp(S[i],"TLE")==0){
            TLE++;
        }
        if(strcmp(S[i],"RE")==0){
            RE++;
        }
    }
    printf("AC x %d\n",AC);
    printf("WA x %d\n",WA);
    printf("TLE x %d\n",TLE);
    printf("RE x %d\n",RE);

    return 0;
}