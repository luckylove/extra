#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sh[n];
    int i,j;
    int ans;
    for(i=0;i<n;i++)
    {
        scanf("%d",&sh[i]);

    }
    ans=1;
    for(j=0;j<n;j++)
    {
        ans=ans*sh[j];
    }
    printf("%d",ans);
    return 0;
}
