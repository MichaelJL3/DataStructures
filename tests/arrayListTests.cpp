
#include <stdexcept>
#include <iostream>

#include "../lists/arrays/arrayList.hpp"
#include "../lists/arrays/arrayIndexList.hpp"
#include "../lists/arrays/sortedArrayList.hpp"

using namespace std;

class Tests{
    ArrayIndexList<int> *indexlist;
    ArrayList<int> *arraylist;
    SortedArrayList<int> *sortedlist;
    int pass, fail;

public:
    Tests();
    ~Tests();

    void eval();
    void deleteEmptyTest();
    void indexOutOfTest();
    void insertTest();
    void deleteTest();
    void sizeCheck();
    void contentCheck();
};

void Tests::eval(){
    cout<<"delete from empty test\n";
    deleteEmptyTest();
    cout<<"insertion test\n";
    insertTest();
    cout<<"deletion test\n";
    deleteTest();
    cout<<"index out of bounds test\n";
    indexOutOfTest();

    cout<<"printing sizes and contents\n";
    sizeCheck();
    contentCheck();

    cout<<"Passed: "<<pass<<"\nFailed: "<<fail<<"\nPercentage: "<<(double)pass/(pass+fail)<<"\n";
}

Tests::Tests(){
    arraylist=new ArrayList<int>(2);
    indexlist=new ArrayIndexList<int>(2);
    sortedlist=new SortedArrayList<int>(2);
    pass=0;
    fail=0;
}

Tests::~Tests(){
    delete arraylist;
    delete indexlist;
    delete sortedlist;
}

void Tests::contentCheck(){
    cout<<arraylist->toString()<<"======\n"<<indexlist->toString()<<"======\n"<<sortedlist->toString()<<"\n";
}

void Tests::sizeCheck(){
    cout<<arraylist->getSize()<<" "<<indexlist->getSize()<<" "<<sortedlist->getSize()<<"\n";
    cout<<arraylist->isfull()<<" "<<indexlist->isfull()<<" "<<sortedlist->isfull()<<"\n";
    cout<<arraylist->isempty()<<" "<<indexlist->isempty()<<" "<<sortedlist->isempty()<<"\n";
}

void Tests::deleteEmptyTest(){
     try{
        arraylist->remove();
        fail++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        pass++;
    }

    try{
        sortedlist->remove();
        fail++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        pass++;
    }

    try{
        indexlist->remove();
        fail++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        pass++;
    }
}

void Tests::indexOutOfTest(){
    try{
        indexlist->insertAt(-1, 5);
        fail++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        pass++;
    }

    try{
        indexlist->insertAt(4, 5);
        fail++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        pass++;
    }
}

void Tests::deleteTest(){
    try{
        arraylist->remove();
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }

    try{
        sortedlist->remove();
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }

    try{
        indexlist->remove();
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }
}

void Tests::insertTest(){
    try{
        arraylist->insert(5);
        arraylist->insert(7);
        arraylist->insert(5);
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }

    try{
        sortedlist->insert(7);
        sortedlist->insert(6);
        sortedlist->insert(5);
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }

    try{
        indexlist->insertAt(0, 1);
        indexlist->insertAt(1, 2);
        indexlist->insertAt(0, 3);
        pass++;
    }catch(exception &e){
        cout<<e.what()<<"\n";
        fail++;
    }
}

int main(){

    Tests test;
    test.eval();

    return 0;
} 
