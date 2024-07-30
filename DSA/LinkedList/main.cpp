#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *address;
    Node(){};
    Node(int data) : data(data), address(nullptr){};
    Node(int data, Node *address) : data(data), address(address){};

    void display(Node *node)
    {
        while (node != nullptr)
        {
            cout << node->data << " ";
            node = node->address;
        }
        cout << endl;
    }
};

int main(){
    Node *node1{new Node()};
    node1->data = 100;
    node1->address = nullptr;
    node1->display(node1);

    Node node2;
    node2.data = 112;
    node2.address = nullptr;
    node2->display(&node2);

    Node *node3{new Node(113)};
    node3->address = nullptr;
    node3->display(node3);

    Node node4{113, nullptr};
    node3.display(&node4);

    Node *node5{new Node(114, nullptr)};
    node5->display(node5);

    Node node6{115, nullptr};
    node6.display(&node6);
    return 0;
}