//
// Created by Richard on 2023/3/4.
//

#include "WIne.h"
template<class T1,class T2>
T1 & Pair<T1,T2>::first() {return a;}
template<class T1,class T2>
T2 & Pair<T1,T2>::second() {return b;}

Wine::Wine(const char *l,int y,const int yr[],const int bot[]):lable(l),year(y),info(ArrarInt(yr,y),ArrarInt(bot,y)){
    ;
}
Wine::Wine(const char *l,int y):lable(l),year(y),info(ArrarInt(0,0),ArrarInt(0,0)){
    ;
}
void Wine::GetBottles() {
    cout<<"Enter"<<lable<<"date for "<<year<<"years:\n";
    info.first().resize(year);
    info.second().resize(year);
    for(int i=0;i<year;i++){
        cout<<"Enter year: ";
        cin>>info.first()[i];
        cout<<"Enter bottles for that year: ";
        cin>>info.second()[i];
    }
}

const string & Wine::label() const {
    return lable;
}
int Wine::sum()const{
     return this->info.second().sum();
     return 0;
}
void Wine::Show() {
    cout<<"Wine:"<<lable<<endl;
    cout<<"Year Bottles"<<endl;
    for(int i=0;i<year;i++){
        cout<<"    "<<info.first()[i]<<"    "<<info.second()[i]<<endl;
    }
}

