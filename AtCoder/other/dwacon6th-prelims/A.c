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
    int *t;
    char **S;
    scanf("%d",&N);
    S=mal(char*,N);
    rep(i,N){
        S[i]=mal(char,256);
    }
    t=mal(int,N);
    rep(i,N){
        scanf("%s %d",S[i],&t[i]);
    }
    char X[256];
    scanf("%s",X);
    int flag=0,ans=0;
    rep(i,N){
        if(strcmp(S[i],X)==0){
            flag=1;
        }
        else if(flag==1){
            ans+=t[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}