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
    char W[256],newW[256];
    scanf("%s",W);
    int j=0;
    for(int i=0;i<=strlen(W);i++){
        if(W[i]=='a'||W[i]=='i'||W[i]=='u'||W[i]=='e'||W[i]=='o'){
            
        }else{
            newW[j]=W[i];
            j++;
        }
    }
    printf("%s\n",newW);
}