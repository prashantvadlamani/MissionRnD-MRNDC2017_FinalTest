/*
Final Test 1
Make Sure you submit well before time .
And dont repeteadtly submit ,as it will cause sync issues , Try to submit alteast with
5-10mins gap between each submit .
Make sure your files are uploaded to GoogleDrive before Time Expires.

95% of times ,The last minute Code changes wont fetch you any more marks .It might even
decrease or become 0 , If it leads to a Project Build Failure .

Problem Setters : Bharath , Vaibhav , Manoj  & Abhijith . 
*/


#include <stdio.h>
#include <stdlib.h>
#include "FunctionHeaders.h"
#include <string.h>


//Helpers for P6
struct ListNode{
	int val;
	struct ListNode *next;
};

void printList(struct ListNode *head){
	printf("List:\n");
	while (head){
		printf("%d-> ", head->val);
		head = head->next;
	}
	printf("\n");
}

struct ListNode *createNode(int val){
	struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->next = NULL;
	newNode->val = val;
	return newNode;
}

struct ListNode* createList(char *s){
	int i;
	struct ListNode *walker = NULL;
	struct ListNode *head = createNode(s[0]-'0');
	walker = head;
	for (i = 1; s[i] != '\0'; i++){
		walker->next = createNode(s[i]-'0');
		walker = walker->next;
	}

	return head;
}


int main() {


	//Test P2
	/*
	{
		int operation = 1;
		char str1[100] = "1011101";
		char str2[100] = "100111";
		char eans[100] = "1111010";
		printf("\n\n [%20s]\n %s [%16s]\n is [%17s]\n\n\n", str1, "XOR", str2, performOperation(str1, str2, "XOR"));
	}
	*/

    //Test P6
	/*
	struct ListNode *head = createList("1234567890");

	printList(head);
	pairUp(head);
	printList(head);
	*/
	return 0;

}