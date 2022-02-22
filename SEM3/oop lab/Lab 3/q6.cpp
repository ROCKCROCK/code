#include<iostream>
using namespace std;
void bubble(int a[],int n)
{  
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"after bubble sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void selection(int a[],int n)
{
 int i, j,loc, temp, min;
   

    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        loc = i;
        for (j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }

        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    cout << "\nSorted list is as follows\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n,temp;
    cout<<"enter the total number of element in array"<<endl;
    cin>>n;
    int a[n];
    int i,j;
    cout<<"enter array-";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n);
    selection(a,n);
    return 0;
}