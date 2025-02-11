#include<stdio.h> 
     int main () {
    int age , vip = 0;
    printf(" Enter your age:\n");
    scanf(" %d", &age);
    // if (age>=90 ){
    //     printf(" You are above 90, You cannot drive !!");
// if (age<=70 && age>=18 ){
 if ((age<=70 && age>=18 ) || (vip==1)){
        printf(" You are above 18 and below 70, You can drive !!\n");

    } 
else{
    printf("You cannot  drive !!\n");

}
if (age==50){
    printf("Half century\n");

}
return 0;
}