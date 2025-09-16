//
//  forest.cpp
//  swift-cplusplus-interop
//

#include "forest.h"

Tree buildTree() {
    return Tree(TreeKind::Oak);
}

TreeKind Tree::kind() { return _kind; }

std::string Tree::name() {
    switch (_kind) {
        case TreeKind::Oak: return "Oak";
        case TreeKind::Redwood: return "Redwood";
        case TreeKind::Willow: return "Willow";
        default: return "unknown2";
    }
}
