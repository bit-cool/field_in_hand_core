#include<iostream>
#include<cstdio>
#include<cmath>




class sensorToData{
    
    
public:
    
    sensorToData(double g1,double g2,double g3,double m1,double m2,double m3)
    {
        gx=g1;
        gy=g2;
        gz=g3;
        
        mx=m1;
        my=m2;
        mz=m3;
        
        tx=my*gz-mz*gy;
        ty=mz*gy-my*gz;
        tz=mx*gy-my*gx;
        
        t=sqrt(tx*tx+ty*ty+tz*tz);
        g=sqrt(gx*gx+gy*gy+gz*gz);
        
        
        TX=tx*t;
        TY=ty*t;
        TZ=tz*t;
        
        GX=gx*g;
        GY=gy*g;
        GZ=gz*g;
        
        
        MX=GY*TZ-GZ*TY;
        MY=GZ*TX-GX*TZ;
        MZ=GX*TY-GY*TX;
        
        yaw=atan(MX/TX);
        pitch=atan(-GX/sqrt(GY*GY+GZ*GZ));
        roll=atan(GY/GZ);
        
    
    }
    

    double yaw=0;
    double pitch=0;
    double roll=0;
    
    
    
private:
    
    double gx=0;
    double gy=0;
    double gz=0;
    double g=0;
    
    
    double mx=0;
    double my=0;
    double mz=0;
    
    double tx=0;
    double ty=0;
    double tz=0;
    double t=0;
    
    double TX=0;
    double TY=0;
    double TZ=0;
    
    double GX=0;
    double GY=0;
    double GZ=0;
    
    double MX=0;
    double MY=0;
    double MZ=0;
    

    
};


