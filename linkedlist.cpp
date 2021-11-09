#include <iostream>  
using namespace std;
   

struct node{  
    int data;  
    struct node *add;  
};      
   
 
struct node *head,*current,*newNode;  
   
void addNode(int value) 
{  
    newNode =(struct node *)malloc(sizeof(struct node *));  
    newNode->data = value;  
    newNode->add = NULL;  
      
    if(head==NULL)  
    {  
        head=newNode;  
        current=newNode;  
    }  
    else 
    {  
        current->add=newNode;  
        current=newNode;  
    } 
}    
void print() 
{  
    struct node *current=head;  
    if(head==NULL) 
        cout<<"List is empty";  
      
    cout<<"Nodes are:";  
    while(current!=NULL) 
    {  
        cout<<current->data<<endl;  
        current=current->add;  
    }
}  
    
int main()  
{  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
    print(); 
    
    return 0;  
}