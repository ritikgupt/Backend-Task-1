#include<iostream>
using namespace std;
#include<math.h>
#include <string.h>
#include <stdlib.h>
    int main()
{
    long long int n,m,value=0,i,j,k,x=0;
    long long int sum=0,count=0;
    char ar[100][100];
    char s,a,b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
         sum=0,count=0;
        for( j=0;j<m;j++)
        {
            sum=0;
            count=0;
            for(k=j;k<m;k++)
            {
                if(count<4)
                sum=sum+(int)ar[i][k]*pow(10,(4-count));
                count=count+1;
            }
            if(sum==(((int)'s')*pow(10,4)+((int)'a')*pow(10,3)+((int)'b')*pow(10,2)+((int)'a')*pow(10,1)))
            {
                value=value+1;
            }
        }
    }
    cout<<value;
    return 0;
}