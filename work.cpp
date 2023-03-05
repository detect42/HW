//
// Created by Richard on 2023/3/4.
//

#include<iostream>
#include "WIne.h"
using namespace std;
int main(){
    const int M=50;
   const int * p=&M;

    char lab[50];
    cin.getline(lab,50);
    cout<<"Enter number of years ";
    int yrs;cin>>yrs;
    Wine holding(lab,yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS=3;
    int y[YRS]={114514,1,2};
    int b[YRS]={48,60,72};
    Wine more("Gushing Grape Red",YRS,y,b);
    more.Show();
    cout << more.label() << ": " << more.sum() << endl;

    return 0-0;
}