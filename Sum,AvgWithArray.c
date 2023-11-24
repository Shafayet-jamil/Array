#include<stdio.h>
int main(){

int array[]= {5, 10, 20, 43, 80};
int sum = 0;
float avg;
int i;
//sum and avg of array.
for( i=0; i<5; i++){
        sum = sum + array[i];

    printf("Arrays elements are: [%d]\n", array[i]);
}

 printf("Sum of arrays is: %d.\n", sum);
  avg = (float)sum/5;
 printf("Average of arrays is: %.3f.", avg);
}
