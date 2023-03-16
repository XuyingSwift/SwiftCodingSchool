/**
 * @file Driver.c for Linked list
 * @author Xuying Swift
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*
    Linked List:
        1: Linear Data Structure
        2: Elements can be stored as per memory availability
        3: Can access elements on linear fasion only
        4: Stores homogeneous elements 
        5: Dynamic in size
        6: Easy insertion and deletion
        7: Starting element or nod eis the key which generally
    Advantages of Data Structure using C
        1: Dynamic in size
        2: No wastage as capacity and size is always equal
        3: Eash insertion and deletion
        4: Effecient memory allocation
    Disadvantages of Data Structure using C
        if the head node is lost, the linked list is lost
        No random access possible
    Applications of data sturctue using C
        suitable where memery is limited
        suitable for application that require frequent interstion and deletion
        implementation of stack and queue
    Time Complexity:
    search O(n) worse case
    insert O(1) worst case
    delete O(1) worst case

    
*/
// Linked list operations in C
#include <stdio.h>
#include <stdlib.h>

// representation fo a node: data and an address of another node
struct node
{
    int data;
    struct node *next;
};

// print the linked list value
void printLinkedList(struct node *current)
{
    printf("\n\nLinkedList elements are -\n");
    while (current != NULL)
    {
        printf("%d---->", current->data);
        current = current->next;
    }
    printf("\n\n");
}

// insert at the beginning of the linkedlist
// ** pointer to a pointer
// C is passing by value
void insert_at_begining(struct node **head, int new_data)
{
    // allocate memory for new node
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node->data = new_data;
    // change the next of new_node to head
    new_node->next = *head;
    // change the next of head to new_node
    *head = new_node;
}

// insert at the end
void insert_at_end(struct node **head, int new_data)
{
    // allocate memory for new node
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    // traverse to the last node wich point to NULL
    struct node *temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    // change the last node to the most recent created new_node
    temp->next = new_node;
}

// insert an new node in the middle of a linkedlist
// insert an new node after a node
void insert_at_middle(struct node *pre, int new_data)
{
    if (pre == NULL)
    {
        printf("Given node can not be null\n");
        return;
    }
    // allocate memory for new node
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = new_data;
    // change next pointers to include the new node in between
    new_node->next = pre->next;
    pre->next = new_node;
}

// delete a Node
void delete_node(struct node **head, int key)
{
    struct node *temp = *head;
    struct node *prev;
    // delete a node at he begining
    if (temp !=NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // find the key to delete
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // if the key is not found
    if (temp == NULL)
    {
        return;
    } else{
        // remove the node
        prev->next = temp->next;
        free(temp);
    }
}

// search for a node
int search_node(struct node **head, int key)
{
    struct node *current = *head;

    while(current != NULL)
    {
        if (current->data == key)
        {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

// sort a linked list
void sort_list(struct node **head)
{
    struct node *current = *head;
    struct node *index;
    int temp;
    if (current == NULL)
    {
        return;
    }
    while (current != NULL)
    {
        // make index point to the current next node
        index = current->next;
        while(index != NULL)
        {
            if (current->data > index->data)
            {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index -> next;

        }
        current = current->next;
    }
}

// main function
int main()
{
    // initialize nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // allocate memory for each node
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // assgin values to nodes
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // print node-value
    head = one; // if you lost the head pointer you will lose the whole linked list
    printLinkedList(head);

    // passing in the address of head 
    insert_at_begining(&head, 4);
    insert_at_end(&head, 5);
    insert_at_middle(head->next, 6);
    printLinkedList(head);

    printf("\nDeleteing a node\n");
    delete_node(&head, 3);
    printLinkedList(head);

    printf("\nSearch for a node\n");
    int result = search_node(&head, 2);
    printf("searching result is: %d\n", result);

    printf("\nSorting the linked list\n");
    sort_list(&head);
    printLinkedList(head);

    return 0;
}   