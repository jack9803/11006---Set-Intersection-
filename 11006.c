#include<stdio.h>
#include<stdlib.h>


int S1[10000000];
int S2[10000000];
int ans[10000000];

int main(){
int N,i,M;
int c1,c2,ca;
while(1){
    scanf("%d",&N);
    if(N==0){
        break;
    }
    for(i=0;i<N;i++){
        scanf("%d",&S1[i]);
    }
    scanf("%d",&M);
    for(i=0;i<M;i++){
        scanf("%d",&S2[i]);
    }
    c1=0;
    c2=0;
    ca=0;
    while(c1<N&&c2<M){
        if(S1[c1]==S2[c2]){
            ans[ca]=S1[c1];
            ca++;
            c1++;
            c2++;
        }else if(S1[c1]<S2[c2]){
            c1++;
        }else if(S1[c1]>S2[c2]){
            c2++;
        }
    }
    if(ca==0){
        printf("empty\n");
    }else{
        for(i=0;i<ca-1;i++){
            printf("%d ",ans[i]);
        }
        printf("%d\n",ans[ca-1]);
    }
}



return 0;
}
