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
    int N,A,B;
    char *S;
    scanf("%d %d %d",&N,&A,&B);
    S=malloc(N*sizeof(char));
    scanf("%s",S);
    int tmp=0;
    int kaigai=1;
    for(int i=0;i<N;i++){
        if(S[i]=='a'){
            if(tmp<A+B){
                printf("Yes\n");
                tmp++;
            }else{
                printf("No\n");
            }
        }
        if(S[i]=='b'){
            if(tmp<A+B&&kaigai<=B){
                printf("Yes\n");
                tmp++;
                kaigai++;
            }else{
                printf("No\n");
            }
        }
        if(S[i]=='c'){
            printf("No\n");
        }
    }
}