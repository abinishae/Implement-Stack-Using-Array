#include <iostream>
using namespace std;

const int stackMax=100000;
int stack[stackMax];
int top=-1;

void push(int data);

void pop();

void display();

 



void push(int data)
{
    if(top == stackMax-1 )
    {cout<<"Stack Full"<<endl;
    return;}
    else 
    stack[++top] = data;
}
void pop()
{ if(top == -1)
{ cout<<"Stack Empty"<<endl;

    return;}
    top--;
    
}
void display()
{
    if(top==-1){
        cout<<"-1";}
     else
 
    for(int i=0; i<=top; ++i)

    cout<<stack[i]<<" ";
    cout<<endl;
}



int main() {
    
    int testcases; //Number of testcases
    cin>>testcases; //Input number of testcases
    while(testcases--) //While testcases exist
    {
        top=-1; //For each testcase the stack top starts from -1
        
        int queries; //How many queries we want to execute
        cin>>queries;
        
        while(queries--) //While queries exist
        {
            int queryType; //What's the query type
            cin>>queryType; 
            if(queryType==1) //If query is push then we input x and push it
            {
                int x;
                cin>>x;
                push(x);//pushing x
            }
            else if(queryType==2) //If query is pop the we just pop the top element
            {
                pop();
            }
            else
            {
                display(); //The third query is display
            }
            
        }
        
    }
    
    
    
	return 0;
}



