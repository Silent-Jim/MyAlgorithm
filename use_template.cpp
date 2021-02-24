//
// Created by lsc19 on 2019-03-16.
//
/*
#include <iostream>

using namespace std;
const int MAXN = 1024;

template<class T>
class myStack {
private:
    const int maxSize;
    int size;
    T *arr;
public:
    myStack(int maxSize):size(0),maxSize(maxSize){
        arr =new T[maxSize];
    }
    myStack():size(0),maxSize(1024){
        arr=new T[maxSize];
    }
    void push(T const &A);

    void pop();

    T top();

    bool isEmpty();

    ~myStack(){
        delete(arr);
        cout<<"delete arr"<<endl;
    }

};

template<class T>
void myStack<T>::push(T const &A) {
    if (size < maxSize) {
        arr[size++] = A;
    }
}

template<class T>
void myStack<T>::pop() {
    if (!isEmpty()) {
        size--;
    }
}

template<class T>
bool myStack<T>::isEmpty() {
    return size == 0;
}


template<class T>
T myStack<T>::top() {
    if (!isEmpty()) {
        return arr[size - 1];
    } else return NULL;
}

void doIt(){
    myStack<int> s=myStack<int>(2);
    cout<<s.top();
    s.push(11);
    s.push(22);
    s.push(33);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

}

template <class T>
class Array{
private:
    T *alist;
protected:

public:
    int length;

    void clear(){
        if(alist!=NULL){
            for (int i = 0; i <length ; ++i) {
                *(alist+i)=T();
            }
        }
    }

    Array(int len):length(len){
        try {
            alist = new T[len];
            if (alist != NULL)throw -2;
            clear();
        }catch (int e){
            if(e==2)cout<<" out of memory "<<endl;
            else cout<<" other error "<<endl;
        }

    }

    Array(const Array<T>&A){
        alist=new T[A.length];
        length=A.length;
        for (int i = 0; i <A.length ; ++i) {
            *(alist+i)=*(A.alist+i);
        }
    }

    Array<T>& operator =(const Array<T>&A){
        if(alist!=NULL){
            delete [] alist;
            alist=new T[A.length];
            length=A.length;
            for (int i = 0; i <A.length ; ++i) {
                *(alist+i)=*(A.alist+i);
            }
        }
    }

    bool operator ==(const Array<T>&A){
        if(length!=A.length)return false;
        for (int i = 0; i <length ; ++i) {
            if(*(alist+i)!=*(A.alist+i))return false;
        }
        return true;
    }

   T& operator[](int i){
        return *(alist+i);
    }


    operator T*()const{
        return alist;
    }

    ~Array(){
        cout<<"delete array"<<endl;
        delete [] alist;
    }

};

int main() {
    //doIt();

    Array<int> arr(10);
    for (int i = 0; i <arr.length ; ++i) {
        arr[i]=i;
    }
    Array<int>arr2(arr);
    cout<<(arr==arr2)<<endl;
    for (int i = 0; i <arr2.length ; ++i) {
        cout<<arr2[i]<<" ";
    }
    int *p=arr;
    cout<<*p<<endl;

}
 */

