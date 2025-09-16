//
//  forest2.h
//  swift-cplusplus-interop
//

#include <string>
#include <memory>
#include <vector>

enum class TreeKind2 {
  Oak,
  Redwood,
  Willow,
};

class Tree2 {
public:
    Tree2(TreeKind2 kind) : _kind(kind) {}
    TreeKind2 kind() { return _kind; }
private:
    TreeKind2 _kind;
};
