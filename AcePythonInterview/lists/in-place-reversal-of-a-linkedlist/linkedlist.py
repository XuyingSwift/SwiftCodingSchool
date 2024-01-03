from node import Node

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_head(self, node):
        if self.head:
            node.next = self.head
            self.head = node
        else:
            self.head = node


