//
// Created by xintong cheng on 2018-04-29.
//

#include "LeafNode.h"

LeafNode::LeafNode(int n) {
    number = n;
}

LeafNode::~LeafNode() {
}

int LeafNode::calculate() {
    return number;
}