//
// Created by lsc19 on 12/05/2019.
//
/*
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <pthread.h>

namespace XX {
    int xx;
}
using namespace std;
using namespace XX;

class A {
public:
    virtual int f()=0;

    A() {
        printf("A cons\n");
    }

    ~A() {
        printf("A des\n");
    }

protected:

private:

};

class B : public A {
public:
    B() {
        printf("B cons\n");
    }

    ~B() {
        printf("B des\n");
    }

protected:

private:

};

class B2 : public A {
public:
    int f() {
        printf("B2 f\n");
        return 0;
    }

    B2() {
        printf("B2 cons\n");
    }

    ~B2() {
        printf("B2 des\n");
    }

protected:

private:

};

class C : public B, public B2 {
public:
    C() {
        printf("C cons\n");
    }

    ~C() {
        printf("C des\n");
    }

protected:

private:

};

class D : public C {
public:
    D() {
        printf("D cons\n");
    }

    ~D() {
        printf("D des\n");
    }

protected:

private:

};


int const pnum = 5;

int* idx;
void *say(void *args) {
   // while (1) {
        cout << "hello world! id=" << *((int *) args) << endl;
   // }
    return 0;
}

int main(int argc, char *argv[]) {
    int b[4];
    int (&a)[4]=b;
    while (1);
    pthread_t tids[pnum];
    for (int i = 0; i < pnum; ++i) {
        idx=&i;
        int ret = pthread_create(&tids[i], NULL, say, (void*)idx);
        if (ret) {
            cout << "pthread_create error: error_code=" << ret << endl;
        }

    }
    pthread_exit(NULL);
}
*/




