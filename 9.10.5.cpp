// standard problem of tower to hanoi by using the recursion
#include<iostream>
using namespace std;
// it is the standard problem that can be solved by using the recursion
// any other method of solving it made it very difficult
// concept behind it is first of all we move
// n-1 disks from from tower to auxilary tower by using an to tower then move last
// disk that is n form form tower to to tower
// then we get that then subproblem is redeced to n-1 disks on the auxilary tower
// so now repeats the recursion form auxilary tower to form tower accordingly
void moveDisks(int n, char fromTower, char toTower, char auTower)
{
    if(n==1)
    {
        cout<<"Move disk "<<n<<" form "<<fromTower<<" to "<<toTower<<endl;
    }
    else
    {

        moveDisks(n-1,fromTower,auTower,toTower);

        cout<<"Move disk "<<n<<" form "<<fromTower<<" to "<<toTower<<endl;

        moveDisks(n-1,auTower,toTower,fromTower);
    }
}
int main()
{
    cout<<"Enter the number of disks"<<endl;
    int n;
    cin>>n;
    cout<<"Ther moves are:"<<endl;
    moveDisks(n,'A','B','C');
    return 0;

}
