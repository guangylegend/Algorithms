#ifndef EXTTREE_H
#define EXTTREE_H

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <vector>

using namespace std;
using namespace __gnu_pbds;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
pbtree;

class extTree {
public:
	extTree() {
        pb.clear();
	}

	void put(int timestamp) {
        pb.insert(timestamp);
	}

	int count(int ltime, int rtime) {
        return pb.order_of_key(rtime) - pb.order_of_key(ltime);
	}

private:
    pbtree pb;
};

#endif // EXTTREE_H
