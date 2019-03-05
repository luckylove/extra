//In a native language the increasing order of priority of characters
//is a, b, c, d, e, f, g, h, me, j, k, l, m, n, ’ng’ , o, p, q, r, s,
// t, u, v, w, x, y, z. You are given two strings string1 and string2
//and you're task is to compare them on the basis of the given priority order.

//Print ‘0’ if both teh strings are equal, ‘1’ if string1 is greater than string2
//and ‘-1’ if string1 is lesser than string2. All teh strings consist of
//lowercase English alphabets only.

 // lets start
 # include<stdio.h>
 # include<string.h>
 int main()
 {
     // the comparison is may be easy but the term ng may be create some difficulty
     // we can use the ascii value
     int a,b,c,d,e,i,j,k;
     int count,count1;
     int test;
    // printf("Enter the test cases");
     scanf("%d",&test);
     while(test--)
     {
         b=0;
         char arr1[10000],arr2[10000];
        // printf("Enter the strings");
         scanf("%s",arr1);
         scanf("%s",arr2);
        // printf("The string you entered is ");
        // puts(arr1);
        // puts(arr2);
         if(strlen(arr1)<strlen(arr2))
         {
             a=strlen(arr1);
         }
         else
         {
             a=strlen(arr2);
         }
         for(i=0,j=0;i<a&&j<a;i++,j++)
         {

             if(arr1[i]=='n'&&arr1[i+1]=='g')
             {
                // printf("ss");
                 if(arr2[j]<'n')
                 {
                     b=1;
                     break;
                 }
                 if(arr2[j]>='o')
                 {
                     //printf("sssss");
                     b=-1;
                     break;
                 }
                 if(arr2[j]=='n')
                 {
                     if(arr2[j+1]=='g')
                     {
                         b=0;
                         j++;
                     }
                     else
                     {
                         b=1;
                         break;
                     }
                 }
                 i++;
             }
             else if(arr2[j]=='n'&&arr2[j+1]=='g')
             {
                //printf("ggg");
                 if(arr1[i]<'n')
                 {
                     b=-1;
                     break;
                 }
                 if(arr1[i]>='o')
                 {
                     b=1;
                     break;
                 }
                 if(arr1[i]=='n')
                 {
                     if(arr1[i+1]=='g')
                     {
                         b=0;
                         i++;
                     }
                     else
                     {
                         b=-1;
                         break;
                     }
                 }
                 j++;
             }
             else
            {
                //printf("ttt");
            if(arr1[i]!=arr2[j])
             {
                 if(arr1[i]<arr2[j])
                    b=-1;
                if(arr1[i]>arr2[j])
                    b=1;
                    break;
             }
            }
         }
         if(strlen(arr1)!=strlen(arr2))
         {
             if(b==0)
             {
                 if(strlen(arr1)>strlen(arr2))
                 {
                     b=1;
                 }
                 else
                 {
                     b=-1;
                 }
             }
         }
         printf("%d\n",b);
     }
 }

