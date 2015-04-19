#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    int i,j,k=1,l,n,s=0;
    while(gets(a)){
        //cout<<a<<endl;
        n=0;k=1;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            //n=0;
            if((a[i]>='A'&&a[i]<='Z')|| (a[i]>='a' && a[i]<='z'))

            {
                n=1;
               // k=1;
                if(k==1){
                    s++;
                    k=2;
                }
            }
            else
            {
                if(n==1)
                    {
                        s+=1;
                        //cout<<s<<endl;
                        n=0;
                    }
            }
        }
        cout<<"s:"<<s<<endl;
        s=0;
    }


    return 0;
}

