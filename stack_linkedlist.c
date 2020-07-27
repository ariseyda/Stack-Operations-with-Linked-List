#include<stdio.h>
#include<stdlib.h>

//Stack Operations with Linked List

struct node{
	int data;
	struct node *next;
};

struct node* top=NULL;

void push(int data){
	
	struct node* addednode=(struct node*)malloc(sizeof(struct node));
	addednode->data=data;
	addednode->next=NULL;
	
	if(top!=NULL){//If there is the first node
		addednode->next=top;
	}
	
	top=addednode;
	
}

void pop(){
	
	
	if(top==NULL){
		printf("Stack is empty.");
	}
	else{
		
		struct node* temp;
		temp=top;
		top=top->next;//Top node equal to node below
		free(temp);
		
		
		
	}
	
	
	
}
int peek(){
	
	return top->data;
}
void printNode(){
	
	struct node* q=NULL;
	q=top;
	printf("\n");
	while(q->next!=NULL){
		printf("%d=>",q->data);
		q=q->next;
	}
	printf("%d",q->data);
	
	
	
}
int main(){
	
	int n,data;
	
	while(1){
		
		printf("\n1-PUSH\n2-POP\n3-PEEK:");
		scanf("%d",&n);
		switch(n){
			
			case 1:
				printf("Data of the node to be added:");
				scanf("%d",&data);
				push(data);
				printNode();
				break;
		    case 2:
			    pop();
				printNode();
				break;
			case 3:
			    printf("\nTop node:%d",peek());
				break;			
		}
		
		
	}
	
	
	return 0;
	
}
