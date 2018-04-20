#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Stack
{
        long int elem[100001];
        long int index;

    public:
        Stack(void){index = 0;};
        void push(long int a)    {elem[index++] = a; }
        void pop(void)       {if(index)--index;} //sufficient for the purpose of the exercise
        int top(){return elem[index-1];};

};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;                      //first input line
    int type;                   //second input line
    long int x;                 //second input line

    Stack nStack;
    Stack mStack;
    mStack.push(0);

    cin  >> n;
    for(long int i=0 ; i<n ; i++)
    {
        cin >> type;
        if(type == 1)
        {
            cin >> x ;
            nStack.push(x);
            if(x >= mStack.top()) mStack.push(x);
        }

        else if(type == 2)
        {
            if(nStack.top() == mStack.top()) mStack.pop();
            nStack.pop();
        }
        else  cout << mStack.top() << endl;
    }

    return 0;
}
