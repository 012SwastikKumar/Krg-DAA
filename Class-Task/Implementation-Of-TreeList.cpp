#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int val;
	Node *next;
	Node *down;

	Node(){
		this->val = 0;
		this->next = NULL;
		this->down = NULL;
	}
	
	Node(int x){
		val = x;
		this->next = NULL;
		this->down = NULL;
	}
};

class TL{
	Node *head;

public:
	TL(){
		this->head = NULL;
	}
	
	int left_len(){
	    int c=0;
	    Node *temp = head;
	    while(temp){
	        temp = temp->next;
	        c++;
	    }
	    return c;
	}
	
	int right_len(){
	    int c=0;
	    Node *temp = head;
	    while(temp){
	        temp = temp->next;
	        c++;
	    }
	    return c;
	}

	void insertAtBegin(int x){
		Node *n1 = new Node(x);
		if(head==NULL){
			head = n1;
			return ;
		}
		n1->next = head;
		head = n1;
	}
	
	void insertAtBegin_Down(int x){
		Node *n1 = new Node(x);
		if(head->down==NULL){
			head->down = n1;
			return ;
		}
		Node *temp = head;
		while(temp->down){
		    temp = temp->down;
		}
		temp->down = n1;
	}

	void insertAtEnd(int x){
		Node *n1 = new Node(x);
		if(head==NULL){
			head=n1;
			return ;
		}
		Node *temp = head;
		while(temp->next){
		    temp = temp->next;
		}
		temp->next = n1;
	}
	
	void insertAtEnd_Down(int x){
		Node *n1 = new Node(x);
		if(head==NULL){
			head=n1;
			return ;
		}
		Node *temp = head;

		while(temp->next){
			temp = temp->next;
		}
		while(temp->down){
		    temp = temp->down;
		}
		
		temp->down = n1;
	}
	
	void printList(){
		if(!head){
			cout<<"Underflow: No data to print.\n";
			return ;
		}
		Node *temp1 = head, *temp2 = NULL;
		while(temp1){
		    cout<<temp1->val;
		    temp2 = temp1->down;
		    while(temp2){
		        cout<<" -> ";
		        cout<<temp2->val;
		        temp2 = temp2->down;
		    }
		    temp1 = temp1->next;
		    cout<<" -> ";
		}
	}
};

int main(){

	TL tl1;
	tl1.insertAtBegin(12);  tl1.insertAtBegin_Down(14);
	tl1.insertAtBegin(5);   tl1.insertAtBegin_Down(7);  tl1.insertAtBegin_Down(8);
	tl1.insertAtEnd(23);     tl1.insertAtEnd_Down(30);  tl1.insertAtEnd_Down(43);
	tl1.insertAtEnd(40);     tl1.insertAtEnd_Down(50);
	tl1.printList();
	return 0;
}
