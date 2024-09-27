#include<stdio.h>
#include<math.h>
int main(){
int n,d = 0,i,j,k,r, result = 0 , multiplier = 1;
scanf("%d", &k );
r = k ;
while(k>0){
    k = k/10 ;
    d++ ;
}
k = r ;
for(i = 1 ; i<= d; i++){
    n = (r%(int)pow(10,i))/(int)pow(10,i-1);
    if(n<=(9 - (k%(int)pow(10,i+1))/(int)pow(10,i))){
        result =  n*multiplier + result  ;
        multiplier *= 10 ;
    }
}


printf("%d", result);

}
