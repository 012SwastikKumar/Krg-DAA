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
	
	Node* getHead(){return this->head;}
};

vector<int> intersection(LL l1, LL l2){
    vector<int>ans;
    Node *p1 = l1.getHead(), *p2 = l2.getHead();
    
    while(p1 && p2){
        if(p1->val == p2->val){
            ans.push_back(p1->val);
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->val > p2->val)p2=p2->next;
        else p1=p1->next;
    }
    
    return ans;
}

int main(){

	LL l1,l2;
	l1.insertAtEnd(11);				// 
	l1.insertAtEnd(13);				// 
	l1.insertAtEnd(12);				// 
	l1.insertAtEnd(19);				// 
	l1.insertAtEnd(13);				// 
	l1.insertAtBegin(90);
	l1.insertAtBegin(80);           //
	
	l2.insertAtEnd(1);
	l2.insertAtEnd(11);
	l2.insertAtEnd(19);
	l2.insertAtEnd(10);
	l2.insertAtEnd(15);
	l2.insertAtEnd(13);
	l2.insertAtEnd(21);
	l2.insertAtEnd(11);
	
	cout<<"Before Sorting";
	l1.printList();cout<<"\n";
	l2.printList();cout<<"\n";
	
	l1.sorting();
	l2.sorting();
	
	cout<<"After Sorting";
	l1.printList();cout<<"\n";
	l2.printList();cout<<"\n";
	
	vector<int>ans = intersection(l1,l2);
	cout<<"Intersection";
	for(auto &x : ans)cout<<x<<" ";

	return 0;
}
