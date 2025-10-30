#include "tree.h"
#include "event.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <string>

Tree::Tree() {}
Tree::~Tree() {}

void Tree::load(const std::string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    Event currentEvent;
    std::string line;

    
}