#include<stdio.h>
int main(){
 int num[4];
 int i, max, min, arr;
 printf("Enter 4 number: ");

 for(i=0; i<4; i++){
  scanf("%d\n", &arr);
 }

 max = num[0];
 min = num[0];

 for( i=1; i<4; i++){
    if(max<num[i]){
        max==num[0];
    }
     if(min<num[0]){
        min==num[0];
     }
 }

printf("Maximum Number is: %d", max);
printf("Minimum Number is: %d", min);

return 0;
}
