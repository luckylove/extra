// stack library in the standary template library
#include<iostream>
#include<cstdlib>
#include<stack>
// important think is that


// in place of <int> any data type we can write



using namespace std;
// function present in the stack is
// 1 push
// pop             it deletes the topmost element of the stack
// isempty
// size
//top            used to get the topmost element of the stack

// now let us write a user defined function for to print the stack
void showstack(stack <int> newstack)
{
    stack <int> temp=newstack;
    while(!temp.empty())
    {
        cout<<temp.top()<<"   ";
        temp.pop();
    }

}
int main()
{
    stack <int> newstack;
    newstack.push(20);
    newstack.push(30);
    newstack.push(40);
    newstack.push(50);
    newstack.push(60);
    newstack.push(70);
     showstack(newstack);
     cout<<endl;
    cout<<newstack.top();
    // we get the topmost element of the stack
    newstack.pop();
    cout<<endl<<newstack.top();
     cout<<endl;
     cout<<"after the element is poped out the stack is "<<endl;
     showstack(newstack);
    // now one element is deleted form the stack

}
