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
    int N;
    scanf("%d",&N);
    double *x;
    char **u;
    x=mal(double,N);
    u=mal(char *,N);
    rep(i,N){
        u[i]=mal(char,16);
    }
    rep(i,N){
        scanf("%lf %s",&x[i],u[i]);
    }

    double yen=0;
    rep(i,N){
        if(strcmp(u[i],"JPY")==0){
            yen+=x[i];
        }else{
            yen+=380000.0*x[i];
        }
    }
    printf("%f\n",yen);
    return 0;
}