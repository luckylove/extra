#include <stdio.h>
int isPowerOf3(int n);
int main() {
	//code
	    int i,n,t;
	    scanf("%d",&t);
	    while((t--)){
	        scanf("%d",&n);
	        if(isPowerOf3(n)){
	            printf("Yes\n");
	        }
	        else{
	            printf("No\n");
	        }
	    }

	return 0;
}
int isPowerOf3(int n){
    if(n%3 != 0){
        return 0;
    }
    while(n!=0){
        n = n/3;
        if(n == 1){
            return 1;
        }
        else if(n%3 != 0){
            return 0;
        }
    }
    return 1;
}
