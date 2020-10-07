using System;
namespace ALlgoDataStructureProject.DataStructure.LinkedList
{
    public class Node<T>
    {
        public T data { get; set; }
        public Node<T> next { get; set; }
        public Node(T data)
        {
            this.data = data;
            next = null;
        }
    }
    public class LinkedList<T>
    {
        public Node<T> Head { get; set; }
        public LinkedList()
        {
        }

        //Insert element at end. To make it efficient make a tail pointer.
        public void InsertElementToEnd(T data)
        {
            if(Head==null)
            {
                Head = new Node<T>(data);
                return;
            }
            var temp = Head;
            while (temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = new Node<T>(data);
            return;
        }

        //Iterate and Print list of elements.
        public void PrintElements()
        {
            Node<T> temp = Head;
            while (temp!=null)
            {
                Console.WriteLine(temp.data);
                temp = temp.next;
            }
        }

        //Insert element at start of the linked list
        public void InsertElementAtStart(T data)
        {
            Node<T> node = new Node<T>(data);
            node.next = Head;
            Head = node;
        }

        //Print value of element at nth Index starting from 0.
        public T ValueAt(int n)
        {
            int i = 0;
            Node<T> node = Head;
            while (node != null)
            {
                
                if (n == i)
                {
                    return node.data;
                }
                node = node.next;
                i++;
            }
            return default;
        }

        //Pop first item and return its value set next time as header
        public T PopFirstElement() {
            if (Head == null)
            {
                return default;
            }
            T data = Head.data;
            Head = Head.next;
            return data;
        }

        // Get value at front
        public T GetFirstElement()
        {
            return Head.data;
        }

        // Get value at end
        public T GetLastElement()
        {
            Node<T> node = Head;
            while (node.next != null)
            {
                node = node.next;
            }
            return node.data;
        }

        //Remove item with Value
        public bool RemoveItemWithValue(T data)
        {
            var temp = Head;
            var prev = Head;
            if (Head == null)
            {
                return false;
            }
            if (temp.data.Equals(data))
            {
                Head = Head.next;
                return true;
            }
            temp = temp.next;
            while (temp!= null)
            {
                if (temp.data.Equals(data)){
                    prev.next = temp.next;
                    return true;
                }
                prev = temp;
                temp = temp.next;
                
            }
            return false;
        }
        //value from end
        public T ValueNFromEnd(int n)
        {
            var backPointer = Head;
            var frontPointer = Head;
            for (int i = 0; i < n-1; i++)
            {
                frontPointer = frontPointer.next;
            }
            while (frontPointer.next != null)
            {
                frontPointer = frontPointer.next;
                backPointer = backPointer.next;
            }
            return backPointer.data;
        }


        //Reverse a linked List 
        public void ReverseLinkedList()
        {
            Node<T> prev = null;
            Node<T> current = Head;
            Node<T> next = null;
            while (current != null)
            {
                next = current.next;
                current.next = prev;
                prev = current;
                current = next;
            }
            Head = prev;
        }

    }
}
