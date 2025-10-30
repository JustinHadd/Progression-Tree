#ifndef TREE_H
#define TREE_H

#include "event.h"
#include <string>
#include <list>

class Tree() {
    private:
        list<event> eventTree;
    public:
        Tree();
        ~Tree();

        void print();
        void load(const std::string& filename);


};

#endif