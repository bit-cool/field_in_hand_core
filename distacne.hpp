#include<iostream>
#include<cstdio>
#include<cmath>

#define eps (1e-12)
//设置允许的误差精度为10的-12次方km


class DistanceCaculator{
    
    
public:

    
    
    double f(double x)
    {
        return sqrt(a*a*cos(x)*cos(x)+b*b*sin(x)*sin(x));
    }
    
    double simpson(double x,double y)
    {
        double z = x + (y-x)/2;
        return (f(x)+4*f(z)+f(y))*(y-x)/6;
    }
    
    double asr(double a,double b,double epss,double A)
    {
        double c = a+(b-a)/2;
        double L = simpson(a,c) , R = simpson(c,b);
        if (fabs(L+R-A) <= 15*epss) return L+R+(L+R-A)/15;
        return asr(a,c,epss/2,L) + asr(c,b,epss/2,R);
    }
    
    double solve(double l,double r)
    {
        return asr(l,r,eps,simpson(l,r));
    }
    
    double getr(double t)
    {
        double result;
        double t2=(sin(t)*sin(t))/(cos(t)*cos(t));
        result=sqrt((1+t2)/(a*a+t2/(b*b)));
        return result;
    }
    
    
    
    void setter(double startPointLatitude,double endPointLatitude)
    {
        theta1=startPointLatitude;
        theta2=endPointLatitude;
    }
    
    //创建该类的一个对象后，使用 setter 设置纬度差
    
    double getter(){
        
        r1=getr(theta1);
        r2=getr(theta2);
        
        result=fabs(solve(asin(r1*cos(theta1)/a),asin(r2*cos(theta2)/a)));
        
        return result;
    }
    //getter 返回的为两个纬度之间的南北方向距离
    
    
    
private:

        
    double pi = 3.14159265359;
    double a=6378137;
    double b=6356752.3142;
    double average=6371012;
    double r1=0;
    double r2=0;
    double theta1=0;
    double theta2=0;
    double result=0;
};


