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

typedef long long ll;

signed main(void){
    int N;
    scanf("%d",&N);
    char **A;
    A=malloc(N*sizeof(char *));
    for(int i=0;i<N;i++){
        A[i]=malloc(256*sizeof(char));
    }

    for(int i=0;i<N;i++){
        scanf("%s",A[i]);
    }

    for(int i=0;i<N;i++){
        int cnt=strlen(A[i]);
        int len=strlen(A[i]);
        if(len<=10){
            printf("%s\n",A[i]);
        }else{
            cnt=cnt-2;
            printf("%c%d%c\n",A[i][0],cnt,A[i][len-1]);
        }
    }

    return 0;
}