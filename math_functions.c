#include <stdio.h>
#include <math.h>

int main() {
    
    int p,q,r,t,u,v;
    float s,w,x,y;
    
    int a=9;
    p = sqrt(a);
    printf("sqrt of 9: %d\n", p);
    q = pow(a,2);
    printf("9 power 2: %d\n", q);
    
    int c = -3;
    r = abs(c);
    printf("absolute value of -3: %d\n", r);
    y = log(q);
    printf("%f\n",y);
    
    float b =3.18;
    t = round(b);
    printf("Round: %d\n", t);
    u = ceil(b);
    printf("Ceil: %d\n", u);
    v = floor(b);
    printf("Floor: %d\n", v);
    
    int d=45;
    s = sin(d);
    printf("sin value: %f\n", s);
    w = cos(d);
    printf("cos value: %f\n", w);
    x = tan(d);
    printf("tan value: %f",x);
   
    return 0;
}

/*
OUTPUT:
sqrt of 9: 3
9 power 2: 81
absolute value of -3: 3
4.394449
Round: 3
Ceil: 4
Floor: 3
sin value: 0.850904
cos value: 0.525322
tan value: 1.619775
  */
