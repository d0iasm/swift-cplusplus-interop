//
//  forest.h
//  swift-cplusplus-interop
//

#include <string>
#include <memory>
#include <vector>
#include <cmath>
#include <set>

enum class TreeKind {
  Oak,
  Redwood,
  Willow,
};

class Tree {
public:
    Tree(TreeKind kind) : _kind(kind) {}
    TreeKind kind();
    std::string name();
private:
    TreeKind _kind;
};

Tree buildTree();
