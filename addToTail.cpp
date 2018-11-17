#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next;
}*head, *tail;
//add to tail
void addToTail()
{
    node * n = new node;
    cout << "Enter the num for node: ";
    cin >> n-> num;
    n -> next = NULL;
    if(head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail -> next = n;
        tail = n;
    }
}
void display()
{
    node *temp;
    temp = head;
    while(temp != tail -> next)
    {
      cout << temp -> num << " ";
      temp = temp -> next;
    }
}

int main()
{
    head = tail = NULL;
    for(int i=0; i<3; i++)
    {
        addToTail();
    }
    cout << "Elements are the following: \n";
    display();
}
