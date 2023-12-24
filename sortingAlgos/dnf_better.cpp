#include<iostream>
using namespace std;
int main()
{
    int n=12;
    int arr[n]={0,1,2,0,1,2,1,2,0,0,0,1};
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for (int i = 0; i <n; i++)
    {
        /* code */
        if (arr[i]==0)
        {
            /* code */
            cnt0++;
        }
        else if (arr[i]==1)
        {
         
         cnt1++;   /* code */
        }
        else
        {
            cnt2++;
        }
       
        

    }
     cout<<"Number of 0's = "<<cnt0<<endl;
        cout<<"Number of 1's = "<<cnt1<<endl;
        cout<<"Number of 2's = "<<cnt2<<endl;
    

    return 0;
}