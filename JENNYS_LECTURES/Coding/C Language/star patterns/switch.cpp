#include <iostream>
using namespace std;


int  main() {

    // char button;
    // cout<< "Input a character :" <<endl;
    // cin>> button;
    // if (button=='a')            
    // {
    //     cout<< "hello "<<endl;
    // }
    // else if (button=='b')   
    // {
    //     cout<<"Namste"<<endl;
    //     /* code */
    // }
    // else if (button=='c')   
    // {
    //     cout<<"Ciao"<<endl;
    //     /* code */
    // }
    // else  
    //     cout<<"I'm still learning more  !!"<<endl;
    //     /* code */

    // switch (button)
    // {
    // case 'a':
    //      cout<< "hello "<<endl;
    //     break;
    // case 'b':
    //      cout<< "new line "<<endl;
    //     break;
    // case 'c':
    //      cout<< "back space  "<<endl;
    //     break;
    // case 'd':
    //      cout<< "option D "<<endl;
    //     break;
    // case 'e':
    //      cout<< "option E "<<endl;
    //     break;
    
    // default:
    //  cout << "Default option "<<"I'm still learning more !!"<<endl;
    //     break;
    // }
    
    float n1, n2;
    cout<<" Enter two numbers :"<<endl;
    cin >> n1 >>n2;
    char op;
    cout <<"Enter an operator :"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
       cout<<"The addition is :"<<n1+n2<<endl;
        break;
    case '-':
       cout<<"The subtraction is :"<<n1-n2<<endl;
        break;
    case '*':
       cout<<"The Multiplication is :"<<n1*n2<<endl;
        break;
    case '/':
       cout<<"The division is :"<<n1/n2<<endl;
        break;
    case '!':
       cout<<"The percrentage  is :"<<!(n1) <<endl;
        break;
    
    default:
    cout <<"Please Enter the valid input operator !!"<<endl;
        break;
    }

    
    
    return 0;
}