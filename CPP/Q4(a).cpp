#include <iostream>
using namespace std;

struct node{
	struct node *prev,*next;
	int data;
};
void insertAtBegin(struct node **head,int value){
	struct node *temp=NULL,*newnode=NULL;
	newnode=new node;
	newnode->data=value;
	newnode->prev=NULL;
	newnode->next=*head;
	*head=newnode;
	
}
void insertAtEnd(struct node **head,int value){
	struct node *temp=NULL,*newnode=NULL;
	if(*head==NULL){
		insertAtBegin(head, value);
	}
	else{
		newnode=new node;
		newnode->data=value;
		newnode->next=NULL;
		temp=*head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
	
}
void insertAtPos(struct node **head,int value,int position){
	if(position==1){
		insertAtBegin(head, value);
	}
	else{
			struct node *temp=NULL,*newnode=NULL;
			newnode=new node;
			newnode->data=value;
			temp=*head;
			int i=1;
			while(temp->next!=NULL||i!=position-1){
				i++;
				temp=temp->next;
			}
			if(temp->next==NULL){
				cout<<"Position doesnot exist";
				return;
			}
			
				newnode->prev=temp->next->prev;
			
				newnode->next=temp->prev->next;	
			
			temp->prev->next=newnode;
			temp->next->prev=newnode;
	}
}
void print(struct node **head){
	struct node *temp=NULL;
	temp=*head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(int argc, char *argv[]) {
	struct node *head=NULL;
	int data,pos;
	cout<<"Enter the data you want to in the ll at the beginning or enter -1 to exit";
	cin>>data;
	while(data!=-1){
		insertAtBegin(&head,data);
		cin>>data;
	}
	//print(&head);
	cout<<"Enter the data you want to in the ll at the end or enter -1 to exit";
	cin>>data;
	while(data!=-1){
		insertAtEnd(&head,data);
		cin>>data;
	}
	cout<<"Enter the data you want to in the ll at the any position or enter -1 to exit";
	cin>>data;
	cin>>pos;
	while(data!=-1){
		insertAtPos(&head,data,pos);
		cin>>data;
		cin>>pos;
	}		
	print(&head);	
}
