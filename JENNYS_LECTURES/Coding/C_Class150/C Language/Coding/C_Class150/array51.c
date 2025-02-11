#include<stdio.h>
#include<conio.h>

void main(){

int i, even=0,odd=0;
int a[10];
printf("Enter the natural numbers: ");
for(i=0; i<10; i++){
    scanf(" %d ", &a[i]);
// }
// for(i=0; i<10; i++){
    a[i]%2==0? even++:odd++;
    // if(a[i]%2==0){
    //     even++;
    // }
    // else{
    //     odd = odd + 1;
    // }
}
    printf("The Even Numbers is :%d\n",even);
    printf("The odd Numbers is :%d\n",odd);
getch();
}