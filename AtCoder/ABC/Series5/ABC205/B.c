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
    int n,*num;
    scanf("%d",&n);
    num=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int *cnt;
    cnt=malloc((n+1)*sizeof(int));
    for(int i=0;i<=n;i++){
        cnt[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(num[i]==j){
                cnt[j]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(cnt[i]!=1){
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}