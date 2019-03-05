#include<iostream>
using namespace std;
const int no=8;
int queens[no];

// this is the checking part
// checking of the position that it is valid or not
bool isValid(int row,int column)
{

    for(int i=1;i<=row;i++){
        if(queens[row-i]==column||queens[row-i]==column-i||queens[row-i]==column+i){
       //     cout<<"row is "<<row<<"column is "<<column<<endl;
            return false;}}
        //    cout<<"true conditions are"<<"row is "<<row<<"coulumn is "<<column<<endl;
        return true;

}


// this is the printing part
void printResult()
{
    cout<<"\n-------------------------------------------\n\n";
    for(int row=0;row<no;row++)
    {
        for(int column=0;column<no;column++)
        {
            if(column==queens[row])
                cout<<"|Q   ";
            else
                cout<<"|   ";
        }
            //cout<<column ==queens[row] ? <<"|Q"<<:<<"| ";
            //printf(column==queens[row] ? "|Q" : "| ");
        cout<<"|\n-------------------------------------------\n\n";
    }
}




// here we use recursion and all
// here bu using recursion we are automatically using the concept of backtracking
// that is if if valid for n-1 then for n also is is not valid this is we consider and then
// we increment the value of column for n and check again firstly for n and then for n-1
void searchh(int row)
{
    static bool found=false;
    for(int column=0;column<no&&!found;column++)
    {
        if(isValid(row,column))    // codition  to check for n and also check for backtraking condition
        {
            queens[row]=column;
            if(row<no-1)
                searchh(row+1);   // use of recursion
            else
                found=true;
        }
    }
}
int main()
{
    searchh(0);
    printResult();
    return 0;

}
