#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number = ";
    cin>>num;
    cout<<"\nTable of "<<num<<endl;
    for(int i=1; i<=10; i++) {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}

// OutPut:
// Enter number = 12		
// Table of 12
// 12 x 1 = 12
// 12 x 2 = 24
// 12 x 3 = 36
// 12 x 4 = 48
// 12 x 5 = 60
// 12 x 6 = 72
// 12 x 7 = 84
// 12 x 8 = 96
// 12 x 9 = 108
// 12 x 10 = 120


// Enter number = 9
// Table of 9
// 9 x 1 = 9
// 9 x 2 = 18
// 9 x 3 = 27
// 9 x 4 = 36
// 9 x 5 = 45
// 9 x 6 = 54
// 9 x 7 = 63
// 9 x 8 = 72
// 9 x 9 = 81
// 9 x 10 = 90

// Enter number = 6
// Table of 6
// 6 x 1 = 6
// 6 x 2 = 12
// 6 x 3 = 18
// 6 x 4 = 24
// 6 x 5 = 30
// 6 x 6 = 36
// 6 x 7 = 42
// 6 x 8 = 48
// 6 x 9 = 54
// 6 x 10 = 60

// Enter number = 20
// Table of 20
// 20 x 1 = 20
// 20 x 2 = 40
// 20 x 3 = 60
// 20 x 4 = 80
// 20 x 5 = 100
// 20 x 6 = 120
// 20 x 7 = 140
// 20 x 8 = 160
// 20 x 9 = 180
// 20 x 10 = 200


