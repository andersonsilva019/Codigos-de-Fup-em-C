#include <stdio.h>
int main(){
    int s=0,pro,des;
    scanf("%d %d",&pro,&des);
    do{
        s++;
    }while((s-10)<(pro-s+des));
    printf("%d",s);
        
}