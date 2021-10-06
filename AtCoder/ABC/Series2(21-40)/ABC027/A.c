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
    int l1,l2,l3;
    scanf("%d %d %d",&l1,&l2,&l3);
    if(l1==l2){
        printf("%d\n",l3);
    }
    else if(l2==l3){
        printf("%d\n",l1);
    }
    else if(l3==l1){
        printf("%d\n",l2);
    }
    return 0;
}