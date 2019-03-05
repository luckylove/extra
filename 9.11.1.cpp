// solving eight queen problem
#include<iostream>
const int noo=4;
using namespace std;
int main()
{
    // first of all take a character array
    int i,j,k,l;
    int a,b,c,d,e;
    int bt[noo]={0,0,0,0};
    int btt=0;
    char arr[noo][noo];
    // let initially place a character _in all
    for(i=0;i<noo;i++)
    {
        for(j=0;j<noo;j++)
            {
                arr[i][j]='_';
            }

    }
    for(i=0;i<noo;i++)
    {
        for(j=0;j<noo;j++)
            {
               cout<<"   "<< arr[i][j];
            }
            cout<<endl<<endl;

    }
    // now we have to place a queen in the first row and check for the column and
    // upper right and left diagonal for the queen already present in it
    // we can place at random place but lets for simplicity we place it at first position
    //arr[0][7]='Q';
        // now to place at new position
        for(k=0;k<noo&&k>=0;)
        {
          for(j=0+bt[k];j<noo;j++)
            { c=1;
                for(a=k;a>=0;a--)           {
                    if(arr[a][j]=='Q')             {
                        c=0;
                        break;        }    }
                for(a=k,b=j;a>=0&&b>=0;a--,b--){
                    if(arr[a][b]=='Q'){
                        c=0;
                        break;}}
                for(a=k,b=j;a>=0&&b<noo;a--,b++) {
                    if(arr[a][b]=='Q')     {
                        c=0;
                        break;   }   }
                if(c==1)
                {
                    arr[k][j]='Q';
                    bt[k]=j+1;
                    cout<<"bt here is "<<bt[k]<< "for the k"<<  k  <<endl;
                    break;
                }
                if(c==0&&j==noo-1)
                {
                    btt=1;
                   // cout<<"k-1 is "<<k-1<<"bt[k]-1 is "<<bt[k-1]-1<<endl;
                   // cout<<" initially arr[k-1][bt[k]-1] is    "<<arr[k-1][bt[k-1]-1]<<endl;
                    arr[k-1][bt[k-1]-1]='_';
                   cout<<" after editing arr[k-1][bt[k]-1] is    "<<arr[k-1][bt[k-1]-1]<<endl;
                    cout<<"k when we put btt is "<<k<<endl;
                }

            }
             if(btt==1)
                {
                    cout<<"intially k is "<<k<<endl;
                    k=k-1;
                    cout<<"after increment k is "<<k<<endl;
                    btt=0;
                    //condition is false and we have to back track
                }
                else
                {
                    k++;
                }

        }


        cout<<endl<<endl;
    for(i=0;i<noo;i++)
    {
        for(j=0;j<noo;j++)
            {
               cout<<"    "<< arr[i][j];
            }
            cout<<endl<<endl;

    }


}
