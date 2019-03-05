// helper program for the problem 5 of the codechef
#include<bits/stdc++.h>
using namespace std;
void printthebinary(int a)
{
    int crr[32];
    int j=0;
    while(a!=0)
    {
        crr[j]=a%2;
        j++;
        a=a/2;
    }
    for(int i=j-1;i>=0;i--)
    {
        cout<<crr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    /*
    5 3
    20 11 18 2 13
    1 3
    3 5
    2 4

    Output:

    2147483629
    2147483645
    2147483645
    */
    int b,c,d,e,f,i,j,k,m,n;
    unsigned int a=20;
    printthebinary(20);
    cout<<"   ";
    printthebinary(11);
    printthebinary(18);
    cout<<"         ";
    printthebinary(2);
    cout<<"   ";printthebinary(13);
    cout<<"ll"<<~a<<endl;
    cout<<"jj  "<<std::fixed<<(~a)-pow(2,31)<<endl;
    b=~a;
    printthebinary(pow(2,31)-1);
    cout<<"ss"<<endl;
    printthebinary(((~20)^(~11))^(~18));
    cout<<"gg"<<endl;
    printthebinary((13^2)^18);
    cout<<"kk"<<endl;
    printthebinary((2^11)^18);
    cout<<"ans is "<<endl;
       printthebinary(2147483629);

    printthebinary(2147483645);


    cout<<endl<<endl<<endl;
    c=pow(2,31)-1;
    printthebinary(18^c);

    // now lets try to calculate the xor
    cout<<" what can i do now"<<endl;
    printthebinary(2147483629^20);
    cout<<"oo"<<endl;
    printthebinary(2147483629^18);
    cout<<"oo"<<endl;
    printthebinary(2147483629^11);
    cout<<"oo"<<endl;
    cout<<" I can do many things now"<<endl;

    printthebinary(2147483645^20);
    cout<<"oo"<<endl;
    printthebinary(2147483645^18);
    cout<<"oo"<<endl;
    printthebinary(2147483645^11);
    cout<<"oo"<<endl;
    cout<<"ab kya kiya jye"<<endl;
    cout<<(2147483645^20)<<endl;
    cout<<(2147483645^18)<<endl;
    cout<<(2147483645^11)<<endl;
    unsigned long long int tt=(long long int)(2147483645^20)+(2147483645^18)+(2147483645^11);
     cout<<" ab to kuch karna hi padega"<<endl;
         cout<<(2147483629^20)<<endl;
    cout<<(2147483629^18)<<endl;
    cout<<(2147483629^11)<<endl;
    cout<<"sum 1 is "<<tt<<endl;
    unsigned long long int yy=(long long int)(2147483629^20)+(2147483629^18)+(2147483629^11);
    cout<<"sum 1 is "<<yy<<endl;





    printthebinary(2147483645^2);
    cout<<"oo"<<endl;
    printthebinary(2147483645^18);
    cout<<"oo"<<endl;
    printthebinary(2147483645^13);
    cout<<"oo"<<endl;

    /*ab kya kiya jye
2147483625
2147483631
2147483638
 ab to kuch karna hi padega
2147483641
2147483647
2147483622
sum 1 is 6442450894
sum 1 is 6442450910

    */
    cout<<"oo"<<endl;
    cout<<"oo"<<endl;
    cout<<"oo"<<endl;
    printthebinary(2147483645);

    printthebinary(2147483645^20);
    cout<<"oo"<<endl;

       printthebinary(2147483645^13);
    cout<<"oo"<<endl;

     printthebinary(2147483645^2);
    cout<<"oo"<<endl;
    printthebinary(2147483645^18);
    cout<<"oo"<<endl;
    printthebinary(2147483645^11);
    cout<<"oo"<<endl;

   cout<<"yy"<<endl;
   cout<<"xor of all the element of an array is "<<endl;
   cout<<((20^11)^18)<<endl;
   printthebinary(((20^11)^18));
   cout<<((18^2)^13)<<endl;
   printthebinary(((18^2)^13));
   cout<<((11^18)^2)<<endl;
   printthebinary(((11^18)^2));

   cout<<endl<<endl<<endl;
   cout<<"xor of all sdfsdfsdf the element of an array is "<<endl;
   unsigned int r=(((~20)^(~11))^(~18))-pow(2,31);
   cout<<r<<endl;
   printthebinary(r);
   cout<<((18^2)^13)<<endl;
   printthebinary(((18^2)^13));
   cout<<((11^18)^2)<<endl;
   printthebinary(((11^18)^2));

}
