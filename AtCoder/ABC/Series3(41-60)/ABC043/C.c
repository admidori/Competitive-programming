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

typedef long long ll;

signed main(void){
    int N;
    int *A;
    scanf("%d",&N);
    A=mal(int,N);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    int *ans;
    ans=mal(int,201);
    for(int i=0;i<201;i++){
        ans[i]=0;
    }
    int k=0;
    for(int i=-100;i<=100;i++){
        for(int j=0;j<N;j++){
            ans[k]+=(A[j]-i)*(A[j]-i);
        }
        k++;
    }
    
    int min=ans[0];
    for(int i=0;i<201;i++){
        if(ans[i]<min){
            min=ans[i];
        }
    }

    printf("%d\n",min);
}