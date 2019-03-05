#include<bits/stdc++.h>
using namespace std;
void insersion1(void)
{
    int a,n,b,j,k,l,i,m;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to insert and position"<<endl;
    cin>>b;
    cin>>m;
    for(i=n-1;i>=m-1;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[m-1]=b;
    cout<<"Now the array we get is "<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
    //
}
void insersion2(void)
{
    int a,n,b,j,k,l,i,m;
    int temp;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to insert"<<endl;
    cin>>b;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    /*
    cout<<"The shorted array we get is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";

    }
    */
    // now first of all we need to find out the position of the element where we need to edit
    if(arr[n-1]>b)
    {
       for(i=n-1;i>=0;i--)
       {
           cout<<"arr[i] is "<<arr[i]<<endl;
           if(arr[i]>b)
           {
               arr[i+1]=arr[i];
           }
           else
           {
               break;
           }
       }
       if(i==0)
       {
           arr[0]=b;
       }
       else
       {
           arr[i+1]=b;
       }
    }
    else
    {
       arr[n]=b;
    }
   cout<<endl;


    cout<<"The shorted array we get is "<<endl;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<"  ";

    }

}
void deletion(void)
{
  int a,n,b,j,k,l,i,m;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write the position of the element to delete"<<endl;
    cin>>b;
    for(i=b-1;i<n-1;i++)
    {
       arr[i]=arr[i+1];
    }
    cout<<"Now the array we get is "<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"    ";
    }
    cout<<endl;
}
void linearsearch(void)
{
  int a,n,b,j,k,l,i,m;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to search"<<endl;
    cin>>b;
    cout<<"The element you entered is   "<<b<<"  is found at position   ";
    a=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==b)
        {
            a=1;
            cout<<i+1<<endl;
        }
    }
    if(a==0)
    {
        cout<<endl<<"     Oops the element you entered is not their in the array"<<endl;
    }
}
void binarysearch(void)
{
    int a,n,b,j,k,l,i,m;
    int first ,last, middle, temp;
    cout<<"Write the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Write an elements to search"<<endl;
    cin>>b;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<" The shorted array we get is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    a=0;
   // cout<<"first is    "<< first<<"last is    "<<last<<"middle is    "<<middle <<endl;
    while(first<last)
    {
    cout<<"first is    "<< first<<"last is    "<<last<<"middle is    "<<middle <<endl;

        if(arr[middle]<b)
        {
            first=middle+1;
            middle=(first+last)/2;
        }
        else if(arr[middle]>b)
        {
            last=middle;
            middle=(first+last)/2;
        }
        else
        {
            a=1;
            cout<<"the element is found at    "<<middle+1<<endl;
            break;
        }
    }
    if(a==0)
    {
        cout<<"  Oops the element is not found in the array you entered  "<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the value"<<endl;
    cout<<"Enter 1 for the insersion with position"<<endl;
    cout<<"Enter 2 for the insersion without position in the shorted form"<<endl;
    cout<<"Enter 3 for the deletion"<<endl;
    cout<<"Enter 4 for the linear search"<<endl;
    cout<<"Enter 5 for the binary search with shorting the elements"<<endl;
    cin>>a;
    if(a==1)
    {
        insersion1();
    }
    else if(a==2)
    {
        insersion2();
    }
    else if(a==3)
    {
        deletion();
    }
    else if(a==4)
    {
        linearsearch();
    }
    else
    {
        binarysearch();
    }

}
