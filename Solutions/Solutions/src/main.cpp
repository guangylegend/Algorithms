#include <iostream>
#include <algorithm>
#include <vector>
#include "../include/extTree.h"

using namespace std;

int main() {
    extTree* ext = new extTree();
    int k = 2;
    ext->put(3);
    ext->put(5);
    ext->put(8);
    ext->put(7);
    cout << ext->count(5-k,5+1) << endl;
    cout << ext->count(4-k,4+1) << endl;
    cout << ext->count(8-k,8+1) << endl;
}
