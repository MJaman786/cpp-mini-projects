#include<iostream>
#include<cmath>
using namespace std;

void getdata(int num){
    int Xvalue[num];
    cout<<"Enter values of X : ";
    for (int i = 0; i < num; i++){
        cin>>Xvalue[i];
    }

    int Yvalue[num];
    cout<<"Enter values of Y : ";
    for (int i = 0; i < num; i++){
        cin>>Yvalue[i];
    }

    double MeanOFX = 0.0;
    double MeanOFY = 0.0;
    for (int i = 0; i < num; i++){
        MeanOFX += Xvalue[i];
        MeanOFY += Yvalue[i];
    }
    MeanOFX /= num;
    MeanOFY /= num;
    cout<<"Mean of X : "<<MeanOFX<<endl;
    cout<<"Mean of Y : "<<MeanOFY<<endl;

    // (X - X bar) and (Y - Y bar)
    double X_XBAR[num];
    double Y_YBAR[num]; 
    for (int i = 0; i < num; i++)
    {
        X_XBAR[i] = Xvalue[i] - MeanOFX;
        Y_YBAR[i] = Yvalue[i] - MeanOFY;
    }

    // (X - Xbar)^2
    // (Y - Ybar)^2 
    double X_XBAR_Square[num]; 
    double Y_YBAR_Square[num]; 
    for (int i = 0; i < num; i++){
        X_XBAR_Square[i] = (X_XBAR[i] * X_XBAR[i]); 
        Y_YBAR_Square[i] = (Y_YBAR[i] * Y_YBAR[i]); 
    }
    
    // summation((X - Xbar)^2)
    // summation((Y - Ybar)^2) 
    double summation_of_X_XBAR_Square = 0.0;
    double summation_of_Y_YBAR_Square = 0.0; 
    for (int i = 0; i < num; i++){
        summation_of_X_XBAR_Square += X_XBAR_Square[i];
        summation_of_Y_YBAR_Square += Y_YBAR_Square[i];
    }

    //Summation of (X - XBAR)(Y - YBAR)
    double X_XBAR_Y_YBAR[num];
    double summation_X_XBAR_Y_YBAR = 0.0;
    for (int i = 0; i < num; i++){
        X_XBAR_Y_YBAR[i] = (X_XBAR[i] * Y_YBAR[i]);
        summation_X_XBAR_Y_YBAR += X_XBAR_Y_YBAR[i];
    }

    // printing a table
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|\tX\t|\tY\t|    (X-Xbar)   |    (Y-Ybar)   |   (X-Xbar)^2  |   (Y-Ybar)^2  |(X-Xbar)(Y-Ybar)|"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i < num; i++){
        cout<<"|\t"<<Xvalue[i]<<"\t|\t"<<Yvalue[i]<<"\t|\t"<<X_XBAR[i]<<"\t|\t"<<Y_YBAR[i]<<"\t|\t"<<
        X_XBAR_Square[i]<<"\t|\t"<<Y_YBAR_Square[i]<<"\t|\t"<<X_XBAR_Y_YBAR[i]<<"\t |"<<endl;
    }
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|\t"<<MeanOFX<<"\t|\t"<<MeanOFY<<"\t|\t"<<"-"<<"\t|\t"<<"-"<<"\t|\t"
    <<summation_of_X_XBAR_Square<<"\t|\t"<<summation_of_Y_YBAR_Square<<"\t|\t"<<summation_X_XBAR_Y_YBAR<<"\t |\t"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;

    double R = (summation_X_XBAR_Y_YBAR)/sqrt(summation_of_X_XBAR_Square * summation_of_Y_YBAR_Square);

    cout<<"\n\t\t-> Coefficient of Corellation : "<<R<<endl<<endl;    
}
int num;
int main(){
    cout<<"Enter number of records : ";
    cin>>num;
    getdata(num);
    // Prompt the user to press enter to exit
    cout <<"\t\tPress enter to exit the program...";
    cin.ignore(); // Ignore any previous newline characters in the input buffer
    cin.get();    // Wait for the user to press enter before exiting
    return 0;
}

/*
----------------------------------------------------------- OUTPUT 2 ---------------------------------------------------

Enter number of records : 5
Enter values of X : 6 2 10 4 8
Enter values of Y : 9 11 5 8 7
Mean of X : 6
Mean of Y : 8
------------------------------------------------------------------------------------------------------------------
|       X       |       Y       |    (X-Xbar)   |    (Y-Ybar)   |   (X-Xbar)^2  |   (Y-Ybar)^2  |(X-Xbar)(Y-Ybar)|
------------------------------------------------------------------------------------------------------------------
|       6       |       9       |       0       |       1       |       0       |       1       |       0        |
|       2       |       11      |       -4      |       3       |       16      |       9       |       -12      |
|       10      |       5       |       4       |       -3      |       16      |       9       |       -12      |
|       4       |       8       |       -2      |       0       |       4       |       0       |       -0       |
|       8       |       7       |       2       |       -1      |       4       |       1       |       -2       |
------------------------------------------------------------------------------------------------------------------
|       6       |       8       |       -       |       -       |       40      |       20      |       -26      |
------------------------------------------------------------------------------------------------------------------

                -> Coefficient of Corellation : -0.919239

                Press enter to exit the program...

----------------------------------------------------------- OUTPUT 2 ---------------------------------------------------

Enter number of records : 6
Enter values of X : 2 4 5 6 8 11
Enter values of Y : 18 12 10 8 7 5
Mean of X : 6
Mean of Y : 10
------------------------------------------------------------------------------------------------------------------
|       X       |       Y       |    (X-Xbar)   |    (Y-Ybar)   |   (X-Xbar)^2  |   (Y-Ybar)^2  |(X-Xbar)(Y-Ybar)|
------------------------------------------------------------------------------------------------------------------
|       2       |       18      |       -4      |       8       |       16      |       64      |       -32      |
|       4       |       12      |       -2      |       2       |       4       |       4       |       -4       |
|       5       |       10      |       -1      |       0       |       1       |       0       |       -0       |
|       6       |       8       |       0       |       -2      |       0       |       4       |       -0       |
|       8       |       7       |       2       |       -3      |       4       |       9       |       -6       |
|       11      |       5       |       5       |       -5      |       25      |       25      |       -25      |
------------------------------------------------------------------------------------------------------------------
|       6       |       10      |       -       |       -       |       50      |       106     |       -67      |
------------------------------------------------------------------------------------------------------------------

                -> Coefficient of Corellation : -0.920316

                Press enter to exit the program...

*/
