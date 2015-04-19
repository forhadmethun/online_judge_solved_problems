#include<iostream>
#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,ss=0;
    while(scanf("%lld",&n)==1)
    {
        ss++;
        printf("%4lld. ",ss);
        a=n/100000000000000;
        if (a>0) printf("%lld kuti ",a);
        b=n%100000000000000;
        c=b/1000000000000;
        if (c>0) printf("%lld lakh ",c);
        d=b%1000000000000;
        e=d/10000000000;
        if (e>0) printf("%lld hajar ",e);
        f=d%10000000000;
        g=f/1000000000;
        if (g>0) printf("%lld shata ",g);
        h=f%1000000000;
        i=h/10000000;
        if (i>=0 && n>=10000000) printf("%lld kuti ",i);
        j=h%10000000;
        k=j/100000;
        if (k>0) printf("%lld lakh ",k);
        l=j%100000;
        m=l/1000;
        if (m>0) printf("%lld hajar ",m);
        o=l%1000;
        p=o/100;
        if (p>0) printf("%lld shata ",p);
        printf("%lld",o%100);
        if (n==0) printf("%lld",n);
        printf("\n");
    }

    return 0;
}
