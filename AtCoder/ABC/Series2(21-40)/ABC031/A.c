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
    int A,D;
    scanf("%d %d",&A,&D);
    int atk=(A+1)*D;
    int dfs=(D+1)*A;
    if(atk<dfs){
        printf("%d\n",dfs);
    }
    else if(atk>dfs){
        printf("%d\n",atk);
    }
    else if(atk==dfs){
        printf("%d\n",atk);
    }
    return 0;
}