#!/usr/bin/python3
""" Single Linked List """


class Node:
    """ Node class """
    __data = 0
    __next_node = None

    def __init__(self, data, next_node=None):
        """ init """
        self.data = data
        self.next_node = next_node

    @property
    def data(self):
        """ data getter """
        return self.__data

    @data.setter
    def data(self, value):
        """ data setter """
        if type(value) != int:
            raise TypeError("data must be an integer")
        else:
            self.__data = value

    @property
    def next_node(self):
        """ nn getter """
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        if (value is not None) and (type(value) != Node):
            raise TypeError("next_node must be a Node object")
        else:
            self.__next_node = value


class SinglyLinkedList:
    """ SLL class """
    __head = None

    def __init__(self):
        """ init """
        self.__head = None

    def __str__(self):
        """ print """
        self.my_print()
        return ""

    def sorted_insert(self, value):
        nn = Node(value)
        if self.__head is None:
            self.__head = nn
        else:
            na = self.__head
            if nn.data <= na.data:
                nn.next_node = na
                self.__head = nn
            else:
                while (na.next_node is not None) and\
                        (nn.data > na.next_node.data):
                    na = na.next_node
                nn.next_node = na.next_node
                na.next_node = nn

    def my_print(self):
        na = self.__head
        while na is not None:
            print(na.data, end="")
            if na.next_node is not None:
                print()
            na = na.next_node
