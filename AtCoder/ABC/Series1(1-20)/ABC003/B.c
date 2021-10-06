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
    char S[256],T[256];
    scanf("%s %s",S,T);
    int atcountS=0;    
    int atcountT=0;
    for(int i=0;i<strlen(S);i++){
        if((!(S[i]=='a'||S[i]=='t'||S[i]=='c'||S[i]=='o'||S[i]=='d'||S[i]=='e'||S[i]=='r'||S[i]=='@'))&&T[i]=='@'){
            printf("You will lose\n");
            return 0;
        }
        if(((!(T[i]=='a'||T[i]=='t'||T[i]=='c'||T[i]=='o'||T[i]=='d'||T[i]=='e'||T[i]=='r'||T[i]=='@'))&&S[i]=='@')){
            printf("You will lose\n");
            return 0;
        }
        if((S[i]!='@'&&T[i]!='@')&&S[i]!=T[i]){
            printf("You will lose\n");
            return 0;
        }
    }
    printf("You can win\n");
    return 0;
}