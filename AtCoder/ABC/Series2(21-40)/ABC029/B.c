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
    int cnt=0,stringcnt=0;
    char S[12][256];
    for(int i=0;i<12;i++){
        scanf("%s",S[i]);
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<strlen(S[i]);j++){
            if('r'==S[i][j]){
                stringcnt=1;
            }
        }
        if(stringcnt==1){
            cnt++;
        }
        stringcnt=0;
    }

    printf("%d\n",cnt);
    return 0;
}