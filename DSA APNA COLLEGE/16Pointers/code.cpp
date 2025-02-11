#include<iostream>
#include<vector>
using namespace std;


// void changeA(int* ptr){// pass by ref pointers
//     *ptr = 20 ;

// }
void changeA(int &b){// pass by reference alias (second other name )
    b = 20 ;

}
/*
array pointers :
array name is points to 1st element of array: arr[0]=>1;
     array is constant pointers : cant change anymore through
        Increment ptr(++)/Decrement ptr(--)
        ptr add number of bytes 
    add / subtract number 
        ptr + 1; 1 int (4B)
        ptr + 3; 3 int (12B)
subtract ptr 

addition is not possible 

*/


int main()
{
    int arr[] = {1,2,4,8,16,32};
    cout << *arr<< endl;
    // cout << arr<< endl;

    cout << *(arr + 1)<<endl;


    // int a = 10;
    // int * ptr = &a;
    // cout <<ptr <<endl;
    // // ptr++;
    // ptr= ptr + 3;
    // cout <<ptr<<endl;





    
//    int a = 10;
//    cout << a << endl;// 10
//    changeA(a);// alias call 
//    cout << a << endl;// 20


//    changeA(&a);// pointer call 
//    cout << a << endl;// 20

    // int a = 5;
    // int * p = &a;
    // int** q = &p;

    // cout <<p<<endl;
    // cout <<q<<endl;
    // cout <<&a<<endl;
    // cout <<**q<<endl;


    /*
    pass by reference 
        pointers

    */

     
    return 0;
};