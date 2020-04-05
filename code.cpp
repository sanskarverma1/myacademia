#include<iostream>
using namespace std;
int main()
{
    int a[4][4]={{1,4,8,10},{2,5,915},{6,16,18,20},{10,17,19,23}};
    int n,i,j;
    cout<<"Enter the element to be searched";
    cin>>n;
    cout<<endl;
    int found;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]==n)
            {
                found =1;

            }

        }

    }
    if(found==1)
    {
        cout<<"Element is present"<<endl;
                cout<<"Position of the element:"<<endl;
                cout<<"Row:"<<i<<","<<"Column"<<j<<endl;

    }
    else
    {

        cout<<"Element not found";
    }

}
