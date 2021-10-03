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
    int N,M,C;
    int A[100][100];
    int B[100];

    scanf("%d %d %d",&N,&M,&C);
    for(int i=0;i<M;i++){
        scanf("%d",&B[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    int tmp;
    int ans=0;
    for(int i=0;i<N;i++){
        tmp=0;
        for(int j=0;j<M;j++){
            tmp+=A[i][j]*B[j];
        }
        tmp+=C;
        if(tmp>0){
            ans++;
        }
    }

    printf("%d\n",ans);
}