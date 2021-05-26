#pragma once

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
        class Node
        {
        public:
            T data;
            Node *right;
            Node *left;
        };

        Node *root;

    public:
        BinaryTree &add_root(const T &data)
        {
            return *this;
        }
        BinaryTree &add_left(const T &parent, const T &left)
        {
            return *this;
        }
        BinaryTree &add_right(const T &parent, const T &right)
        {
            return *this;
        }

        friend ostream &operator<<(ostream &out, const BinaryTree &tree)
        {
            return out;
        }

        class iterator
        {
        private:
            Node *currNode;

        public:
            T &operator*()
            {
                return currNode->data;
            }

            T *operator->()
            {
                return &(currNode->data);
            }

            iterator &operator++()
            {
                return *this;
            }
            bool operator==(const iterator &other)
            {
                return false;
            }

            bool operator!=(const iterator &rhs)
            {
                return false;
            }
        };

        iterator begin()
        {
            return iterator();
        }
        iterator end()
        {
            return iterator();
        }
        iterator begin_preorder()
        {
            return iterator();
        }
        iterator end_preorder()
        {
            return iterator();
        }
        iterator begin_inorder()
        {
            return iterator();
        }
        iterator end_inorder()
        {
            return iterator();
        }
        iterator begin_postorder()
        {
            return iterator();
        }
        iterator end_postorder()
        {
            return iterator();
        }
    };
}