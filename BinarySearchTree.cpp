#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // constructor fot the node class
      Node()
      {
          leftchild = nullptr; /// initialize left child to null
          rightchild = nullptr; // initialize right child to null
      }
};

class Binarytree
{
public:
    Node *ROOT;

    Binarytree()
    {
        ROOT = nullptr; // initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai";
        cin >> x;

        // step 1: Allocate memory for the new node
        Node *newNode = new Node();

        
}