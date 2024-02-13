/*
#include<iostream>
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
    MeanOFX /= num; // MeanOFX = MeanOFX / num
    MeanOFY /= num; // MeanOFY = MeanOFY / num
    cout<<"Mean of X : "<<MeanOFX<<endl;
    cout<<"Mean of Y : "<<MeanOFY<<endl;

    // Summation of X - X bar and also Y - Y bar
    int X_XBAR[num];
    int Y_YBAR[num];
    for (int i = 0; i < num; i++)
    {
        X_XBAR[i] = Xvalue[i] - MeanOFX;
        Y_YBAR[i] = Yvalue[i] - MeanOFY;
    }
    // double MeanOF_X_XBAR = 0.0;
    // double MeanOF_Y_YBAR = 0.0;
    // for (int i = 0; i < num; i++)
    // {
    //     MeanOF_X_XBAR += X_XBAR[i];
    //     MeanOF_Y_YBAR += Y_YBAR[i];
    // }
    // cout<<"Mean of X-XBAR : "<<X_XBAR<<endl;
    // cout<<"Mean of Y-YBAR : "<<Y_YBAR<<endl;
    
    int X_XBAR_Square[num];
    int Y_YBAR_Square[num];
    for (int i = 0; i < num; i++){
        X_XBAR_Square[i] = X_XBAR[i] * X_XBAR[i];
        Y_YBAR_Square[i] = Y_YBAR[i] * Y_YBAR[i];
    }
    double Mean_of_X_XBAR_Square = 0.0;
    double Mean_of_Y_YBAR_Square = 0.0; 
    for (int i = 0; i < num; i++){
        Mean_of_X_XBAR_Square += X_XBAR_Square[i];
        Mean_of_Y_YBAR_Square += Y_YBAR_Square[i];
    }
    Mean_of_X_XBAR_Square /= num;
    Mean_of_Y_YBAR_Square /= num;

    //Summation of (X - XBAR)(Y - YBAR)
    int X_XBAR_Y_YBAR[num];
    double summation_X_XBAR_Y_YBAR = 0.0;
    for (int i = 0; i < num; i++){
        X_XBAR_Y_YBAR[i] = X_XBAR[i] * Y_YBAR[i];
    }
    for (int i = 0; i < num; i++){
        summation_X_XBAR_Y_YBAR += X_XBAR_Y_YBAR[i];
    }
    summation_X_XBAR_Y_YBAR /= num;

    // printing a table
    for (int i = 0; i < num; i++){
        cout<<"|\t"<<Xvalue[i]<<"\t|\t"<<Yvalue[i]<<"\t|\t"<<X_XBAR[i]<<"\t|\t"<<Y_YBAR[i]<<"\t|\t"<<
        X_XBAR_Square[i]<<"\t|\t"<<Y_YBAR_Square[i]<<"\t|\t"<<X_XBAR_Y_YBAR[i]<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|\t"<<MeanOFX<<"\t|\t"<<MeanOFY<<"\t|\t"<<"-"<<"\t|\t"<<"-"<<"\t|\t"
    <<Mean_of_X_XBAR_Square<<"\t|\t"<<Mean_of_Y_YBAR_Square<<"\t|\t"<<summation_X_XBAR_Y_YBAR<<"\t|\t"<<endl;    
}

int num;
int main(){
    cout<<"Enter number of records : ";
    cin>>num;
    getdata(num);
    return 0;
}
*/
#include<iostream>
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

    // Summation of X - X bar and also Y - Y bar
    double X_XBAR[num]; // Change to double
    double Y_YBAR[num]; // Change to double
    for (int i = 0; i < num; i++)
    {
        X_XBAR[i] = Xvalue[i] - MeanOFX;
        Y_YBAR[i] = Yvalue[i] - MeanOFY;
    }
    
    double X_XBAR_Square[num]; // Change to double
    double Y_YBAR_Square[num]; // Change to double
    for (int i = 0; i < num; i++){
        X_XBAR_Square[i] = (X_XBAR[i] * X_XBAR[i]) / num; // divide by num here
        Y_YBAR_Square[i] = (Y_YBAR[i] * Y_YBAR[i]) / num; // divide by num here
    }
    
    double Mean_of_X_XBAR_Square = 0.0;
    double Mean_of_Y_YBAR_Square = 0.0; 
    for (int i = 0; i < num; i++){
        Mean_of_X_XBAR_Square += X_XBAR_Square[i];
        Mean_of_Y_YBAR_Square += Y_YBAR_Square[i];
    }

    //Summation of (X - XBAR)(Y - YBAR)
    double X_XBAR_Y_YBAR[num]; // Change to double
    double summation_X_XBAR_Y_YBAR = 0.0;
    for (int i = 0; i < num; i++){
        X_XBAR_Y_YBAR[i] = (X_XBAR[i] * Y_YBAR[i]) / num; // divide by num here
        summation_X_XBAR_Y_YBAR += X_XBAR_Y_YBAR[i];
    }

    // printing a table
    for (int i = 0; i < num; i++){
        cout<<"|\t"<<Xvalue[i]<<"\t|\t"<<Yvalue[i]<<"\t|\t"<<X_XBAR[i]<<"\t|\t"<<Y_YBAR[i]<<"\t|\t"<<
        X_XBAR_Square[i]<<"\t|\t"<<Y_YBAR_Square[i]<<"\t|\t"<<X_XBAR_Y_YBAR[i]<<endl;
    }
    cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|\t"<<MeanOFX<<"\t|\t"<<MeanOFY<<"\t|\t"<<"-"<<"\t|\t"<<"-"<<"\t|\t"
    <<Mean_of_X_XBAR_Square<<"\t|\t"<<Mean_of_Y_YBAR_Square<<"\t|\t"<<summation_X_XBAR_Y_YBAR<<"\t|\t"<<endl;

    int R = (summation_X_XBAR_Y_YBAR)/(Mean_of_X_XBAR_Square * Mean_of_Y_YBAR_Square);

    cout<<"\nCoefficient of Corellation : "<<R<<endl;    
}
int num;
int main(){
    cout<<"Enter number of records : ";
    cin>>num;
    getdata(num);
    return 0;
}

/*
Enter number of records : 5
Enter values of X : 6 2 10 4 8
Enter values of Y : 9 11 5 8 7
Mean of X : 6
Mean of Y : 8
|       6       |       9       |       0       |       1       |       0       |       0.2     |       0
|       2       |       11      |       -4      |       3       |       3.2     |       1.8     |       -2.4
|       10      |       5       |       4       |       -3      |       3.2     |       1.8     |       -2.4
|       4       |       8       |       -2      |       0       |       0.8     |       0       |       -0
|       8       |       7       |       2       |       -1      |       0.8     |       0.2     |       -0.4
---------------------------------------------------------------------------------------------------------------------------
|       6       |       8       |       -       |       -       |       8       |       4       |       -5.2    |

Coefficient of Corellation : 0
*/
