#include<iostream>
using namespace std;

double no1,no2;
//fuction for addtion
void add(double num1, double num2) //num1 ,num2 are arguments to all function
{
    double z = num1+num2;
    cout<<"Addition of "<<num1<<" + "<<num2<<" = "<<z<<endl;
}

//function for subtraction
void sub(double num1, double num2)
{
    double z = num1-num2;
    cout<<"Subtraction of "<<num1<<" - "<<num2<<" = "<<z<<endl;
}

//function for multiplication
void multi(double num1, double num2)
{
    double z = num1*num2;
    cout<<"Subtraction of "<<num1<<" x "<<num2<<" = "<<z<<endl;
}

//function for division
void divi(double num1, double num2)
{
    double z = num1/num2;
    cout<<"Division of "<<num1<<" / "<<num2<<" = "<<z<<endl;
}

int main()
{
    int num;
    while (num!=0) {
        cout<<"\t\t\nCalculator Operation [+ , - , * , /]"<<endl;
        cout<<"1.Addtion (+)"<<endl;
        cout<<"2.Subtraction (-)"<<endl;
        cout<<"3.Multiplication (*)"<<endl;
        cout<<"4.Division (/)"<<endl;
        cout<<"Enter your choice = ";
        cin>>num;
        switch (num) {
            //case 1
        case 1:
            cout<<"------------------"<<endl;
            cout<<"Enter number 1 = ";
            cin>>no1;
            cout<<"Enter number 2 = ";
            cin>>no2;
            add(no1,no2);
            break;
            //case 2
        case 2:
            cout<<"------------------"<<endl;
            cout<<"Enter number 1 = ";
            cin>>no1;
            cout<<"Enter number 2 = ";
            cin>>no2;
            sub(no1,no2);
            break;
            //case 3
        case 3:
            cout<<"------------------"<<endl;
            cout<<"Enter number 1 = ";
            cin>>no1;
            cout<<"Enter number 2 = ";
            cin>>no2;
            multi(no1,no2);
            break;
            //case 4
        case 4:
            cout<<"------------------"<<endl;
            cout<<"Enter number 1 = ";
            cin>>no1;
            cout<<"Enter number 2 = ";
            cin>>no2;
            divi(no1,no2);
            break;

            default:
            cout<<"-----------------------"<<endl;
            cout<<"Enter the valid options"<<endl;
            break;
        }
    }
    int input; //this is only for seeing output in cmd (not recomanded)
    cin>>input;

    return 0;
}