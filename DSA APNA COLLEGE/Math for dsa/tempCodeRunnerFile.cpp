    }
    cout <<endl;

}

void printSumDigits(int n){
    int sum=0;
    while (n !=0)
    {
         int digit = n % 10 ;
         sum+=digit;

         n = n/10;
    }
    cout<<sum<<endl;

}