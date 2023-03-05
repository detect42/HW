//
// Created by Richard on 2023/3/4.
//

#ifndef HW_WINE_H
#define HW_WINE_H

#include<iostream>
#include<string>
#include<valarray>
using namespace std;

template <class T1,class T2> class Pair;
typedef valarray<int> ArrarInt;
typedef Pair<ArrarInt ,ArrarInt > PairArray;

template <class T1,class T2>
class Pair{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const {return a;}
    T2 second()const{return b;}
    Pair(const T1 &aval,const T2 &bval): a(aval),b(bval){
        ;
    }
    Pair();
};


class Wine {
private:
    string lable;
    PairArray info;
    int year;
public:
    Wine(const char *l,int y ,const int yr[],const int bot[]);
    Wine(const char *l,int y);
    void GetBottles();
    const string & label() const;
    int sum() const;
    void Show();


};


#endif //HW_WINE_H
