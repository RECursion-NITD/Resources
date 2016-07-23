#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int data;
	ListNode *next;	
	ListNode(int data) : data(data), next(NULL) {}
};

void print(ListNode *head) {
	while(head) {
		cout << head->data << " ";
		head = head->next;
	}
}

void _insertAtStart(ListNode **head, int data) {
	ListNode *new_node = new ListNode(data);
	new_node->next = *head;
	*head = new_node;
}
void _append(ListNode **head, int data) {
	ListNode *new_node = new ListNode(data);
	if(!*head) *head = new_node;
	else {
		ListNode *it = *head;
		while(it->next) {
			it = it->next;
		}
		it->next = new_node;
	}
}
void _insertNth(ListNode **head, int data, int position) {
	if(position==0) _insertAtStart(head, data);
	else {
		ListNode *it = *head;
		ListNode *new_node = new ListNode(data);
		for(int i=1; i<position; i++) {
			if(!it) return;
			it = it->next;
		}
		new_node->next = it->next;
		it->next =  new_node;
	}
}

void _reverse(ListNode **head) {
	ListNode *prev = NULL, *curr = *head, *next;
	while(curr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

bool _compareLists(ListNode **head1, ListNode **head2)
{
	ListNode *headA = *head1, *headB = *head2;
    while(headA!= NULL && headB!=NULL) {
        if(headA->data != headB->data)
            return false;
        headA = headA->next;
        headB = headB->next;
    }
    if((headA==NULL && headB!=NULL) || (headA!=NULL && headB==NULL))
        return false;
    return true;
}

void _mergeLists(ListNode **headA, ListNode **headB)
{
    ListNode *mergedList = NULL;
    while(*headA != NULL && *headB != NULL){
        if((*headA)->data <= (*headB)->data){
            _append(&mergedList, (*headA)->data);

            *headA = (*headA)->next;
        }
        else {
            _append(&mergedList, (*headB)->data);
            *headB = (*headB)->next;
        }
    }
    if(*headA != NULL && *headB == NULL) {
        while(*headA != NULL){
            _append(&mergedList, (*headA)->data);
            *headA = (*headA)->next;
        }
    }
    else {
        while(*headB != NULL) {
            _append(&mergedList, (*headB)->data);
            *headB = (*headB)->next;
        }
    }
    *headA = mergedList;
}

ListNode* _getNthFromTail(ListNode **head, int positionFromTail)
{
    ListNode* slow = *head;
    ListNode* fast = *head;
    for(int i=0;i<positionFromTail;i++){
        fast = fast->next;
    }
    while(fast->next!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

void _removeDuplicates(ListNode **head)
{
    ListNode* temp = *head;
    ListNode* prev;
    int val;
    while(temp) {
        if(temp==*head){
            val = (*head)->data;
            prev = temp;
        }
        else {
            if(temp->data == val) {
                prev->next = temp->next;
            }
            else {
                val = temp->data;
                prev = temp;
            }
        }
        temp = temp->next;
    }
}