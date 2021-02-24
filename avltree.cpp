//
// Created by lsc19 on 06/11/2019.
//
/*
#include <iostream>
#include <algorithm>
//#include <cmath>
using namespace std;

struct tnode {
    int val;
    int hgt;
    tnode *pa;
    tnode *lc;
    tnode *rc;

    tnode() {
        hgt = 0;
        pa = NULL;
        lc = NULL;
        rc = NULL;
    }

    tnode(int val, int hgt, tnode *pa, tnode *lc, tnode *rc)
            : val(val), hgt(hgt), pa(pa), lc(lc), rc(rc) {}

};

int get_height(tnode *p) {
    if (p == NULL) {
        return 0;
    }
    int tl = 0, tr = 0;
    if (p->lc != NULL) {
        tl = p->lc->hgt;
    }
    if (p->rc != NULL) {
        tr = p->rc->hgt;
    }
    return max(tl, tr) + 1;
}

int calc_balance(tnode *p) {
    if (p == NULL) {
        return 0;
    }
    int tl = 0, tr = 0;
    if (p->lc != NULL) {
        tl = p->lc->hgt;
    }
    if (p->rc != NULL) {
        tr = p->rc->hgt;
    }
    return tr - tl;
}

//RR
tnode *l_rotate(tnode *p) {
    //p1 is the right child of p
    tnode *p1 = p->rc;
    p->rc = p1->lc;
    p->hgt = get_height(p);
    p1->lc = p;
    p1->hgt = get_height(p1);
    p1->pa = p->pa;
    p->pa = p1;
    return p1;
}


//LL
tnode *r_rotate(tnode *p) {
    //p1 is the left child of p
    tnode *p1 = p->lc;
    p->lc = p1->rc;
    p->hgt = get_height(p);
    p1->rc = p;
    p1->hgt = get_height(p1);
    p1->pa = p->pa;
    p->pa = p1;
    return p1;
}

//RL
tnode *rl_rotate(tnode *p) {
    p->rc = r_rotate(p->rc);
    return l_rotate(p);
}

//LR
tnode *lr_rotate(tnode *p) {
    p->lc = l_rotate(p->lc);
    return r_rotate(p);
}

tnode *adjust(tnode *p) {
    tnode *tmp = p;
    int balance = calc_balance(p);
    if (abs(balance) >= 2) {
        if (balance < 0) {
            int chbal = calc_balance(p->lc);
            if (chbal < 0) {
                tmp = r_rotate(p);
            } else {
                tmp = rl_rotate(p);
            }
        } else {
            int chbal = calc_balance(p->rc);
            if (chbal > 0) {
                tmp = l_rotate(p);
            } else {
                tmp = rl_rotate(p);
            }
        }
    }
    return tmp;
}

tnode *insert_node(tnode *p, int value) {
    tnode *tmp = p;
    if (p == NULL) {
        p = new tnode();
        p->val = value;
        p->hgt = 1;
        return p;
    } else {
        if (value < p->val) {
            p->lc = insert_node(p->lc, value);
        } else {
            p->rc = insert_node(p->rc, value);
        }
        p->hgt = get_height(p);
        tmp = adjust(p);
    }
    return tmp;
}


tnode *find_max(tnode *p) {
    if (p == NULL) {
        return NULL;
    }
    if (p->rc == NULL) {
        return p;
    } else {
        return find_max(p->rc);
    }
}

tnode *find_min(tnode *p) {
    if (p == NULL) {
        return NULL;
    }
    if (p->lc == NULL) {
        return p;
    } else {
        return find_min(p->lc);
    }
}


void delete_space(tnode *p) {
    if (p == NULL) {
        return;
    }
    tnode *par = p->pa;
    if (par != NULL) {
        if (p == par->lc) {
            par->lc = NULL;
        } else if (p == par->rc) {
            par->rc = NULL;
        }
    }
    delete p;
    p = NULL;
}

tnode *delete_node(tnode *p, int value) {
    tnode *tmp = p;
    if (p == NULL) {
        printf("Can not find it\n");
        return NULL;
    } else {
        if (value < p->val) {
            tmp = delete_node(p->lc, value);
        } else if (value > p->val) {
            tmp = delete_node(p->rc, value);
        } else {
            if (p->lc != NULL && p->rc != NULL) {
                tnode *rep = NULL;
                if (get_height(p->lc) < get_height(p->rc)) {
                    rep = find_max(p->rc);
                } else {
                    rep = find_min(p->lc);
                }
                p->val = rep->val;
                delete_space(rep);
            } else if (p->lc != NULL || p->rc != NULL) {
                tnode *par = p->pa;
                tnode *pc = NULL;
                if (p->lc != NULL) {
                    pc = p->lc;
                } else {
                    pc = p->rc;
                }
                if (par != NULL) {
                    pc->pa = par;
                    if (par->lc == p) {
                        par->lc = pc;
                    } else if (par->rc == p) {
                        par->rc = pc;
                    }
                }
                delete_space(p);
            } else {
                delete_space(p);
            }
            p->hgt = get_height(p);
            tmp = adjust(p);
        }
        return tmp;
    }
}

int main(int argc, char *argv[]) {
    tnode *root = NULL;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        root = insert_node(root, a);
    }
    printf("222");
}

 */

