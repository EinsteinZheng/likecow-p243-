//
//  main.cpp
//  likecow(p243)
//
//  Created by Zheng on 10/14/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//  1s/256MB

#include <iostream>
#include<vector>
using namespace std;


int main(int argc, const char * argv[]) {
    freopen("likecow.in","r",stdin);
    //freopen("/Users/zheng/Desktop/OI/likecow(p243)/test/likecow.out","w",stdout);
    int m=0,n=0;
    cin>>m>>n;
    vector<int> cow1,cow2,buf;
    int x=0;
    int similarity=0;
    for(int i=0;i<2*m*n;i++)
    {
        cin>>x;
        buf.push_back(x);
    }
    for(int i=0;i<m*n;i++)
    {
        cow1.push_back(buf[i]);
    }
    for(int i=0;i<m*n;i++)
    {
        cow2.push_back(buf[i+m*n]);
    }
    for(int i=0;i<m*n;i++)
    {
        if(cow1[i]==cow2[i])
        {
            similarity++;
        }
    }
    cout<<similarity<<endl;
    return 0;
}
