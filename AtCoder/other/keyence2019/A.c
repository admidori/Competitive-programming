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
    int A[256];
    rep(i,4){
        scanf("%d",&A[i]);
    }
    int flag1=0,flag2=0,flag3=0,flag4=0;
    rep(i,4){
        if(A[i]==1){
            flag1=1;
        }
        if(A[i]==9){
            flag2=1;
        }
        if(A[i]==7){
            flag3=1;
        }
        if(A[i]==4){
            flag4=1;
        }
    }
    if(flag1==1&&flag2==1&&flag3==1&&flag4==1){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}