#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next;
}*head,*tail;
//AddToHead
void addToHead()
{
	node* n = new node;
	cout << "Enter the value: ";
	cin >> n->num;
	n->next = NULL;
	if(head == NULL)
	{
		head = n;
		tail = n;

	}
	else
	{

		n -> next = head;
		head = n;
	}
}
void display()
{
    node* temp;
	temp = head;
	while(temp != tail)
	{

		cout << temp -> num << " ";
		temp = temp->next;
	}
}
int main()
{
    head = tail = NULL;
    /*for(int i=0; i<5; i++)
    {
        addToHead();
    }
    cout << "Following are the elements: ";
    cout << endl;
    display();*/
    cout << &head;
}

