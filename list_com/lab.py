class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Meow:
    def push(self, data):
        node = Node(data)
        node.next = self.head
        self.head = node

    def pop(self):
        current_data = self.head
        self.head = self.head.next
        return current_data.data

    def __init__(self):
        self.tail = None
        self.head = None

    def dequeue(self):
        node = self.head
        self.head = self.head.next
        if self.head is None:
            self.tail = None
        return node.data

    def enqueue(self, num):
        node = Node(num)
        if self.head is None:
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node
