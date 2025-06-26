#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //cronstructor for the node class
    Node()
    {
        leftchild = nullptr; //initialize left child to null
        rightchild = nullptr; //initialize right child to null
    }
};

class BinaryTree
{
    public:
    Node *ROOT;
    
    BinaryTree()
    {
        ROOT = nullptr; //initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        //step 1: allocate memory fpr the new node
        Node *newnode = new Node;

        //step 2: assign value to the data field of the node
        newnode->info = x;

        //step 3: make the left and right child of the new node point to null
        newnode->leftchild = nullptr;
        newnode->rightchild = nullptr;

        //step 4: locate tyhe node with will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentnode = nullptr;
        search(x, parent, currentnode);
    }
}