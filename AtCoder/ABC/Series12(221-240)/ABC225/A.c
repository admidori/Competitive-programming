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

signed main(void){
    char S[256];
    scanf("%s",S);
    int cnt=0,k=1;
    rep(i,3){
        rep2(j,k,3){
            if(S[i]==S[j]){
                cnt++;
            }
        }
        k++;
    }
    if(cnt==0){
        puts("6");
    }
    if(cnt==1){
        puts("3");
    }
    if(cnt>=2){
        puts("1");
    }
    return 0;
}