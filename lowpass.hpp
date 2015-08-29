#include<iostream>
#include<cstdio>
#include<cmath>

#define ALPHA 0.001
//设置每次更改的权重为0.001


class LowPass{
    
    
public:

    
    
    LowPass()
    {
    }
    LowPass(double newx, double newy ,double newz)
    {
        x=newx;
        y=newy;
        z=newz;

    }
    //在构造函数中设定最后一组数值为固定值，留待下一次作为初始值使用
    
    setter（double newx, double newy ,double newz）
    {
        x=x+ALPHA*(newx-x);
        y=y+ALPHA*(newy-y);
        z=z+ALPHA*(newz-z);
    }
    //对新的输入值进行获取
    
    
    double x=0;
    double y=0;
    double z=0;
    //初始值设为0
};


