# include <stdio.h>
#include <conio.h>

    struct student{
    int roll_no;
    char name[20];
    float marks;

    };

    struct student s;// global variable

    // 
    // pointer  var containing address of another var 
    // int * ptr;

    int main() {
        struct student s1={1, "jerry",89};
    // int a ;
    // int * ptr = &a;

    struct student * ptr=&s1;
    printf("Info for for s1:\n");
    printf("%d %s %f\n", s1.roll_no,s1.name,s1.marks);
    printf("%d %s %f\n", ptr->roll_no,ptr->name,ptr->marks);
    


    return 0;
}