

// #include <stdio.h>
// #include<math.h>
// #include<stdlib.h>


// int main()
// { 
          
//     while(1)
//     {
//          int p;
//        printf("\nPress 1, to continue ");
//        printf("\nPress 0, to Exit !! \n");
    
//        scanf("%d", &p);
//        if(p==1)
//         {
//                 int x, sum=0, rem=0,temp;
//             printf("\nEnter a number:\n");
//             scanf("%d",&x);
//             temp = x;
//             while(temp!=0){
//                 rem = temp%10;
//                 sum = sum + pow(rem,3);
//                 temp = temp/10;
//             }
//             if(x==sum){
//                 printf("The number  %d is Armstrong number", x);
//             }
//             else{
//                 printf("It is not Armstrong number");
//             }
//         }
//       else
//           {
//             exit(0);
//           }
//     }
   
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int isArmstrong(int num) {
//     int originalNum, remainder, n = 0, result = 0;

//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum = originalNum / 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result = result + pow(remainder, n);
//         originalNum = originalNum / 10;
//     }

//     if (result == num)
//         return 1;
//     else
//         return 0;
// }

// int main() {
//     int number;

//     printf("Armstrong numbers between 1 and 1000 are:\n");

//     for (number = 1; number <= 1000; ++number) {
//         if (isArmstrong(number))
//             printf("%d\n", number);
//     }

//     return 0;
// }

// ### Explanation:

// 1. **isArmstrong Function**:
//    - `isArmstrong(int num)`: Checks if `num` is an Armstrong number.
//    - `originalNum`: Stores a copy of `num` for calculations.
//    - `remainder`: Stores the remainder when `originalNum` is divided by 10.
//    - `n`: Counts the number of digits in `num`.
//    - `result`: Stores the sum of cubes of digits.
//    - First, it calculates the number of digits (`n`) in `num`.
//    - Then, it computes `result` as the sum of cubes of each digit of `num`.
//    - If `result` equals `num`, then `num` is an Armstrong number, and the function returns `1`; otherwise, it returns `0`.

// 2. **Main Function**:
//    - `main()`: Initializes `number` from 1 to 1000 and checks each number using `isArmstrong()` function.
//    - If a number is an Armstrong number, it prints the number.

// 3. **Output**:
//    - The program prints all Armstrong numbers between 1 and 1000.

// ### Note:
// - An Armstrong number (also known as Narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// - In this implementation, `pow()` function from `math.h` library is used to calculate powers.
// - This program efficiently checks each number from 1 to 1000 and prints the Armstrong numbers.

// When you run this program, it will output all Armstrong numbers between 1 and 1000:

// ```plaintext
// Armstrong numbers between 1 and 1000 are:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 153
// 370
// 371
// 407
// ```

#include <stdio.h>
#include <math.h>

int main() 
{  int x, sum=0, rem=0,temp;
            // printf("\nEnter a number:\n");
            // scanf("%d",&x);
            for(x=1;x<=1000;x++)
            {
                 sum=0;
                temp = x;
                
                while(temp!=0){
                    rem = temp%10;
                    sum = sum + pow(rem,3);
                    temp = temp/10;
                }
                if(x==sum){
                    printf("\nThe number  %d is Armstrong number!!", x);
                   
                }
            }
            
    return 0;
}
