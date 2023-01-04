#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int val;
	Node *next;

	Node(){
		this->val = INT_MIN;
		this->next = NULL;
	}
	
	Node(int x){
		val = x;
		this->next = NULL;
	}
};


class LL{
	Node *head;

public:
	LL(){
		this->head = NULL;
	}

	void insertAtBegin(int x){
		Node *n1 = new Node(x);
		n1->next = head;
		head = n1;
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

	void deleteBegin(){
		if(!head){
			cout<<"Underflow: No data to delete.";
			return ;
		}
		head = head->next;
	}

	void deleteEnd(){
		if(!head){
			cout<<"Underflow: No data to delete.";
			return ;
		}
		Node *temp = head;

		while(temp->next->next){
			temp = temp->next;
		}
		temp->next = NULL;
	}

	void deletValue(int x){
		if(!head){
			cout<<"Underflow: No data to delete.";
			return ;
		}
		Node *prev=NULL , *curr=head;
		bool flag=true;

		while(curr){
			if(curr->val == x){
				flag=false;
				Node *temp = curr;
				prev->next = curr->next;
				curr->next = prev;
				// delete(curr);
				// delete(temp);
			}
			prev = curr;
			curr = curr->next;
		}

		if(flag){
			cout<<"There exist no element which is asked to delete.\n";
		}else{
			cout<<"Deleted\n";
		}
		
	}
	
	void sorting(){
	    Node *temp1 = head, *temp2 = head;
	    while(temp1->next){
	        temp2 = temp1->next;
	        while(temp2){
	            if(temp2->val < temp1->val){
	                int temp = temp2->val;
	                temp2->val = temp1->val;
	                temp1->val = temp;
	            }
	            temp2 = temp2->next;
	        }
	        temp1 = temp1->next;
	    }
	    
	}
	
	void seg_odd_eve(){
	    Node *temp1 = head, *temp2 = head;
	    while(temp2->next){temp2 = temp2->next;}
	}

	void printList(){
		if(!head){
			cout<<"Underflow: No data to print.";
			return ;
		}
		Node *temp = head;

		while(temp){
			cout<<temp->val<<"->";
			temp = temp->next;
		}

	}
};

int main(){

	LL l1;
// 	l1.deleteBegin();cout<<"\n";	// underflow
// 	l1.deleteEnd();cout<<"\n";		// underflow
// 	l1.printList();cout<<"\n";		// underflow
// 	l1.deletValue(12);cout<<"\n";	// underflow
	l1.insertAtEnd(11);				// 11
	l1.insertAtEnd(12);				// 11 12
	l1.insertAtEnd(13);				// 11 12 13
// 	l1.printList();cout<<"\n";		// 11->12->13
// 	l1.deletValue(14);				// No data to del
// 	l1.deletValue(12);				// 11 13
// 	l1.printList();cout<<"\n";		// 11->13
	l1.insertAtEnd(14);				// 11 13 14
	l1.insertAtEnd(15);				// 11 13 14 15
// 	l1.insertAtBegin(12);			// 12 11 13 14 15
// 	l1.deleteBegin();				// 11 13 14 15
// 	l1.deleteEnd();					// 11 13 14
	l1.insertAtBegin(90);
	l1.insertAtBegin(80);           // 80 90 11 12 13 14 15 
	l1.sorting();
	l1.printList();cout<<"\n";		// 11->13->14


	return 0;
}
