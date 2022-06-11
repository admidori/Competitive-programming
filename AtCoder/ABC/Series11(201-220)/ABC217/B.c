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
    char S[3][256];
    rep(i,3){
        scanf("%s",S[i]);
    }
    int ABC=0,ARC=0,AGC=0,AHC=0;
    rep(i,3){
        if(strcmp(S[i],"ABC")==0){
            ABC=1;
        }
        else if(strcmp(S[i],"ARC")==0){
            ARC=1;
        }
        else if(strcmp(S[i],"AGC")==0){
            AGC=1;
        }
        else if(strcmp(S[i],"AHC")==0){
            AHC=1;
        }
    }
    if(ABC==0){
        puts("ABC");
    }
    if(ARC==0){
        puts("ARC");
    }
    if(AGC==0){
        puts("AGC");
    }
    if(AHC==0){
        puts("AHC");
    }
    return 0;
}