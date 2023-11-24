#include<stdio.h>
int main(){

int arr[] = {20, 50, 89, 61, 53};
int position = -1;
int find;//what number I want to search
printf("Enter a value: ");
scanf("%d", &find);

for(int i=0; i<5; i++){
    if(find==arr[i]){
        position=i;
        break;
    }
}

 if(position==-1){
        printf("Not found the Number.");
    }
    else{
        printf("Found the number.\nIt is:%dth postion.\n", position);
    }
}
