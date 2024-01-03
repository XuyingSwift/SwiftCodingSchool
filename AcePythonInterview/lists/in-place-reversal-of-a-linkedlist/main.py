from node import Node
from linkedlist import LinkedList

def print_list_with_forward_arrow(head):
    temp = head
    while temp:
        print(temp.data, end=" ")

        temp = temp.next
        if temp:
            print("=>", end=" ")
        else:
            print("-> null", end=" ")

def reverse(head):
    prev = None
    next_node = None
    current_node = head

    while current_node != None:
        next_node = current_node.next
        current_node.next = prev
        prev = current_node
        current_node = next_node
    head = prev
    return head
    

a = LinkedList()
a.insert_at_head(Node(0))
a.insert_at_head(Node(1))
a.insert_at_head(Node(2))
a.insert_at_head(Node(3))
a.insert_at_head(Node(4))
a.insert_at_head(Node(5))
print_list_with_forward_arrow(a.head)
head = reverse(a.head)
print(head.data)
print_list_with_forward_arrow(head)
