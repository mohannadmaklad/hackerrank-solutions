#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct stack
{
    unsigned int index ;
    unsigned int capacity;
    char array[1000];
};
typedef struct stack stack;

//
// very simple Stack operations
//

void push(stack*,char);
char pop(stack*);
char isEmpty(stack*);

//
//Balanced brackets functions
//

char isBalanced(char*);


int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n ; i++)
    {
        int pos = 0;
        char s[1001];
        scanf("%s",s);
        if(isBalanced(s)) printf("YES\n");
        else printf("NO\n"); 
    }

    return 0;
}


void push(stack *mys, char element)
{
    if(mys->index < mys->capacity) mys->array[mys->index++] = element;
}

char pop(stack* mys)
{
    return mys->array[--mys->index];
}


char isEmpty(stack* mys)
{
    if(mys->index == 0 ) return 1;
    else return 0;
}


char isBalanced(char *st)
{
    stack temp;
    temp.capacity = 1000;
    temp.index = 0;

    char tmpBracket;

    unsigned int i =0;
    while(st[i] != '\0')
    {
        if(st[i] =='{' || st[i] == '[' || st[i] == '(')
                push(&temp,st[i]); //open bracket detected

        else if(st[i] =='}' || st[i] == ']' || st[i] == ')') //closed bracket detected
        {
            if(isEmpty(&temp))
                return 0; //no open bracket for the closed bracket, not balanced

            else
            {
                tmpBracket = pop(&temp);
                if
                (
                   (st[i] == ']' && tmpBracket !='[') ||
                   (st[i] == '}' && tmpBracket !='{') ||
                   (st[i] == ')' && tmpBracket !='(')
                )
                {
                    return 0;  //not balanced
                }
            }
        }
        i++; //increment the loop
    }

    if(isEmpty(&temp)) return 1; // if there are no remaining open brackets
    else
        return 0;
}
