

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
namespace ariel
{
    template <typename T>
    class BinaryTree
    {
    public:
        class Node
        {

        public:
            T data;
            Node *left;
            Node *right;
        };

        Node *root;

        BinaryTree &add_root(T root)
        {
            return *this;
        }
        BinaryTree &add_left(const T &root, const T &left)
        {
            return *this;
        }
        BinaryTree &add_right(const T &root, const T &left)
        {
            return *this;
        }

        friend ostream &operator<<(ostream &out, const BinaryTree &board)
        {
            return out;
        }

        class iterator
        {
        public:
            Node *currNode;
            iterator(Node *ptr = nullptr) : currNode(ptr) {}

            T &operator*() const
            {
                return currNode->data;
            }

            T *operator->() const
            {
                return &(currNode->data);
            }

            iterator &operator++()
            {
                return *this;
            }           
            bool operator==(const iterator &other) const
            {
                return true;
            }

            bool operator!=(const iterator &rhs) const
            {
                return true;
            }
        };

        iterator begin()
        {
            return iterator{root};
        }
        iterator end()
        {
            return iterator{root};
        }
        iterator begin_preorder()
        {
            return iterator{root};
        }
        iterator end_preorder()
        {
            return iterator{root};
        }
        iterator begin_inorder()
        {
            return iterator{root};
        }
        iterator end_inorder()
        {
            return iterator{root};
        }
        iterator begin_postorder()
        {
            return iterator{root};
        }
        iterator end_postorder()
        {
            return iterator{root};
        }
    };
}