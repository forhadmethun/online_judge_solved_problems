#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long  x;
    while(cin>>x && x)
    {
         int i,s,c=0;long m=x;
        if(floor(sqrt(x))==sqrt(x))c--;
        for(i=2;i<=(sqrt(x)+1);i++)
        {   s=0;
            if(i>x)break;
            while(x%i==0)
            {
                x/=i;
                s=1;
            }
            if(s==1)c++;
        }
        printf("%ld : %d\n",m,c+1);
    }
    return 0;
}
