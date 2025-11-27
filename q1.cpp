#include <iostream>
using namespace std;
int main() {
    int queue[100], front=-1, rear=-1, n, choice, value;
    cin>>n;
    do{
        cin>>choice;
        if(choice==1){
            if(rear==n-1) cout<<"Queue full\n";
            else{
                cin>>value;
                if(front==-1) front=0;
                queue[++rear]=value;
            }
        }
        else if(choice==2){
            if(front==-1||front>rear) cout<<"Queue empty\n";
            else cout<<queue[front++]<<"\n";
        }
        else if(choice==3){
            if(front==-1||front>rear) cout<<"Queue empty\n";
            else cout<<"Not empty\n";
        }
        else if(choice==4){
            if(rear==n-1) cout<<"Queue full\n";
            else cout<<"Not full\n";
        }
        else if(choice==5){
            if(front==-1||front>rear) cout<<"Queue empty\n";
            else for(int i=front;i<=rear;i++) cout<<queue[i]<<" ";
            cout<<"\n";
        }
        else if(choice==6){
            if(front==-1||front>rear) cout<<"Queue empty\n";
            else cout<<queue[front]<<"\n";
        }
    }while(choice!=7);
  return 0;
}
