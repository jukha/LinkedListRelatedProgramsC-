#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next;
}*head,*tail;
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
//add to mid
void addToMid()
{
    bool flag = false;
    node *temp;
    temp = head;
    int value;
    cout << "Enter the value from the node after which you want to add a new node: ";
    cin >> value;
    while(temp->num != value)
    {
        temp = temp -> next;
        if(temp == NULL)
        {
            flag = true;
            break;
        }
    }
    if(flag == false)
    {
        node *n = new node;
        cout << "Enter the num for new node: ";
        cin >> n -> num;
        n -> next = temp -> next;
        temp -> next = n;

    }
}
void display()
{
    node *temp;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->num << " " << endl;
        temp = temp -> next;
    }
}
int main()
{
    head = tail = NULL;
    for(int i=0; i<4; i++)
    {
       addToTail();
    }
    display();
    addToMid();
    display();

}
