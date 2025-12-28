#include<stdio.h>
int main(){
char arr[20]="preethi";
int count =0,i=0,j;
char temp;
while(arr[i] != '\0')
{
count++;
i++;
}
printf("count is :%d\n",count);
j=i-1;
i=0;
while(i<j){
temp = arr[i];
arr[i] = arr[j];
arr[j]= temp;
i++;
j--;
}
printf("%s",arr);
}
