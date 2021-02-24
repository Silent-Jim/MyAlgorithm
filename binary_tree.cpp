//
// Created by lsc19 on 2019-03-10.
//
/*
#include <iostream>
#include <stack>

using namespace std;
typedef struct node {
    int val;
    struct node *lc, *rc;
} TreeNode, *BiTree;
stack<BiTree>stack1;

BiTree new_node(int val) {
    BiTree p = (BiTree) malloc(sizeof(TreeNode));
    p->val = val;
    p->lc = NULL;
    p->rc = NULL;
    return p;
}

void build(BiTree root, int now) {
    if (now >= 6)return;
    BiTree  l, r;
    l = new_node(now * 2);
    r = new_node(now * 2 + 1);
    root->lc = l;
    root->rc = r;
    build(l, now * 2);
    build(r, now * 2 + 1);
}

void pre_traverse(BiTree root) {
    if (root != NULL) {
        printf("val:%d\n", root->val);
        pre_traverse(root->lc);
        pre_traverse(root->rc);
    } else return;
}

void pre_traverse_stack(BiTree root) {
   stack1.push(root);
   while (!stack1.empty()){
       BiTree p=stack1.top();
       stack1.pop();
       if(p!=NULL){
           printf("val:%d\n", p->val);
           stack1.push(p->rc);
           stack1.push(p->lc);
       }
   }
}




int main4() {

    BiTree tree = new_node(1), p = tree, q = p;
    build(tree, 1);
    pre_traverse_stack(tree);
    free(p);
    p = NULL;
}
 */