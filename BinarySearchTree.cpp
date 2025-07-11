#include <iostream>
using namespace std;

class Node
{
public: 
    int info;
    Node *leftchild;
    Node *rightchild;

  // constructor for the node class
    Node()
    {
        leftchild = nullptr; // initialize left child to null
        rightchild = nullptr; // initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initialize ROOT to null 
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x; 

        // step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // step 2: Assign value to the data field of new node
        newNode->info = x;

        // step 3: make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: locate the node which will be the parrent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5: if parent is NULL (Tree is empty)
        if (parent = nullptr)
        {
            // 5a: mark the new node as ROOT 
            ROOT = newNode;

            // 5b: exit
            return;
        }

        // step 6: if the value in the data field od new node is less than that of parent 
        if (x < parent->info)
        {
            // 6a: make the left of parent point to the new node 
            parent->leftchild = newNode;

            // 6b: exit
            return;
        }

        // step 7: if the value in the data field of the new node is greater than that of the parent
        else if(x > parent->info)
        {
            // 7a: make the right child of parent point to the new node
            parent ->rightchild = newNode;

            // 7b: exit
            return;
        }
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        //this function searches the currentNode of the specified node as well as the current node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode ->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
    void inorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;

        inorder(ptr->leftchild);
        cout << ptr->info << " ";
        inorder(ptr->rightchild);
    }

    void preorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;
        
        
        cout << ptr->info << " ";
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }
    void posorder(Node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;
        
        
        posorder(ptr->leftchild);
        posorder(ptr->rightchild);
        cout << ptr->info << " ";
    }
};