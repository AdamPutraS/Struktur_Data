#include<iostream>
    #define max 100

    using namespace std;

    class sstack{
        int a[max];
        int top;

        public:
            void initialize();
            void push(int n);
            void pop();
            void peep();
            void display();
    };

    void sstack::initialize(){
        cout<<"Empty Stack is created ";
        top=-1;
    }

    void sstack::push(int n){
        if(top==max-1){
            cout<<"\nStack full";
            cout<<"\nStack full";
        }
        a[++top]=n;
    }

    void sstack::pop(){
        if(top==-1){
            cout<<"\nStack is already empty";
        }
        else{
            cout<<"\nPopped element is "<<a[top];
            top--;
        }
    }

    void sstack::peep(){
        if(top==-1){
            cout<<"\nStack is already empty ";
        }
        else{
            cout<<"\nTopmost element is "<<a[top];
        }
    }

    void sstack::display(){
        if(top==-1){
            cout<<"\nStack is Empty ";
        }
        else{
            cout<<"\nContents of the Stack is ";
            int x=top;
            while(x!=-1){
                cout<<a[x]<<" ";
                x--;
            }
        }
    }

    int main()
    {
        sstack s;
        int ch,x,n;
        s.initialize();
        cout<<"\nChoice : \n1) Push \n2) Pop \n3) Peep \n4) Display \n5) Exit :P";
        while(1){
            cout<<"\nEnter your choice ";
            cin>>ch;
            if(ch==1){
                cout<<"\nEnter the element to be inserted ";
                cin>>n;
                s.push(n);
            }
            else if(ch==2){
               s.pop();
            }
            else if(ch==3){
                s.peep();
            }
            else if(ch==4){
                s.display();
            }
            else break;
        }
        return 0;
    }