#include<iostream>
#include<cstdio>
#include<cmath>





class LevelPlain{
    
    
public:

    
    
    LevelPlain(float gx,float gy,float gz)
    {
        
        r=2*sqrt(gx*gx+gy*gy+gz*gz);
        
        a = gx+length/2;
        b = -gy+length/2;
        
    }
    //在构造函数中通过重力传感器或者加速度传感器的值计算水平仪的半径和投点的位置
    
    
    
    
    float re0;
    float x=0;
    float y=0;
    
    
};


