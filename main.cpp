//
// Created by Richard on 2023/3/3.
//

#include<bits/stdc++.h>
using namespace std;

const int M=1000005;

int n,m;

struct num{
    int val,d[10];
    num(){
        memset(d,0,sizeof(d));
    }
}a[M],b[M];

vector<num> v[10];

void Solve(int D){

    for(int i=1;i<=n;i++) v[a[i].d[D]].push_back(a[i]);
    int now=0;
    for(int i=0;i<=9;i++){
        for(auto it: v[i]) a[++now]=it;
    }
   // for(int i=1;i<=n;i++) a[i]=b[i];
   for(int i=0;i<=9;i++) v[i].clear();
}

signed main(){

    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i].val);
        int val=a[i].val,cnt=1;
        while(val!=0){
            a[i].d[cnt]=val%10;val/=10;cnt++;
        }
    }

    for(int i=0;i<10;i++) Solve(i);

    for(int i=1;i<=n;i++) cout<<a[i].val<<" ";

    return 0-0;
}
