#include<iostream>
using namespace std;
int q[20];
int front=0;
int rear=0;

void insert(int el){
    int n;
    if((front==1 <<rear==n)||(front==rear+1))
    {
        cout<<"overflow"<<endl;
        return ;
    }
    if(front==0)
    {
        front=1;
        rear=1;
    }
    else{
        if(rear==n)
        rear=1;
        else
        rear=rear+1;
    }
}
void del()
{
    int n;
    if(front==0){
        cout<<"underflow"<<endl;
    }
    cout<<q[front];
    if(front==rear){
        front=0;
        rear=0;
    }
    else{
        if(front==n)
        front=1;
        else
        front=front+1;
    }
    }
   
    void display()
    {
        int f=front;
        int r=rear;
        while(f<=r){
            cout<<q[f];
            f=f+1;
        }
    }
 int main()
{
    int ch,el;
    
    do{
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:cout<<"Enter elements:"<<endl;
            cin>>el;
            insert(el);
            break;
            case 2: del();
            break;
            case 3:display();
            break;
            case 4: cout<<"Exit"<<endl;
            default:cout<<"Wrong choice"<<endl;
        }
    }
    while(ch!=4);
    return 0;
}
