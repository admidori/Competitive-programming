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
    int m,n,N;
    scanf("%d %d %d",&m,&n,&N);
    int ans=N;
    int make=0,now=N;
    int container=0;
    while(1){
        int tmp=now;
        container+=now;
        now=0;
        if(container<m){
            break;
        }
        rep(i,tmp){
            make++;
            if(make==m){
                container-=m;
                now+=n;
                make=0;
            }
        }
        ans+=now;
    }
    printf("%d\n",ans);
}