#include<stdio.h>
void increasing(int x,int n){
    if(x>n)
        return;
        printf("%d\n",x);
        increasing(x+1,n);
        printf("%d\n",x);
    
}
int main(){
    int n = 5;
    increasing(1,n);
    return 0;
}