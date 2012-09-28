/* 
 * File:   main.cpp
 * Author: rarce
 *
 * Created on March 22, 2012, 10:38 AM
 */

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include "Article.h"
using namespace std;

/*
 * This function demonstrates the use of the following functions:
 *  -- constructor with size parameter
 *  -- size:  returns the current CAPACITY of the vector.
 *  -- direct access to elements of the vector via the "[]" operator
 * It also demonstrates how the vector initialices its contents vs. how
 * a static array initializes them.
 */
void tut01() {
    vector <int> V1(10);
    int A[10];
    cout << "The size of V1 is: " << V1.size() << endl;
    
    cout << "The contents of vector V1 are: "  << endl;
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
    
    cout << "The contents array of A are: "  << endl;
    for (unsigned int i=0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;
    
    return;
}


/*  
 *  This function demonstrates the use of the following functions:
 *    push_back: pushes an element to the back of the vector.
 *    capacity:  returns the current CAPACITY of the vector.
 * 
 *  Note that capactity is not necesarily the same as size. The vector
 *  container maintains a dynamic array to store its contents. Initially
 *  the array capacity is 0. Every time we add a new element to the vector 
 *  using push_back, the vector resizes its dynamic array to double 
 *  its previous capacity.
 */
void tut02() {
    vector <int> V1;

    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;
    
    cout << "The contents of vector V1 are: " << endl;
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;

    cout << "Lets add one element at the end.." << endl;
    V1.push_back(22);
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;

    cout << "Lets add one element at the end.." << endl;
    V1.push_back(25);
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;
    
    cout << "Lets add one element at the end.." << endl;
    V1.push_back(45);
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;

    cout << "The contents of vector V1 are: " << endl;
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;

    return;
}

/*  
 *  This function demonstrates the use of the following functions:
 *    -- constructor (size, initial value)
 *    -- resize
 *    -- clear
 */
void tut03() {
    vector <int> V1(12,1); 

    cout << "\nV1 is a vector constructed with (12,1).\n";    
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;
    
    cout << "The contents of vector V1 are:\n";
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
 
    
    cout << "\nResizing the vector to 5..\n";
    V1.resize(25);
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;

    cout << "The contents of vector V1 are:\n";
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
    
    
    cout << "\nResizing the vector to 5..\n";
    V1.resize(5);
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;

    cout << "The contents of vector V1 are: " << endl;
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
    
    
    cout << "\nLet's clear the vector ..\n";
    V1.clear();
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;

    cout << "The contents of vector V1 are: " << endl;
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;

    return;
}


/*  
 *  This function demonstrates the use of the following functions:
 *    -- constructor that copies from an array
 *    -- access via the [] vs the at()
 */
void tut04() {
    int A[] = {10,20,35,45,66,77};
    
    vector <int> V1(&(A[0]),&A[5]); 

    cout << "\nV1 is a vector constructed by copying from array.\n";    
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;
    
    cout << "The contents of vector V1 are:\n";
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
    

    cout << "\nTrying to access from an invalid position using []:\n";
    cout << "Result of V1[10]:" << V1[10] << endl;    
    
   
    cout << "\nTrying to access from an invalid position using at():\n";
    cout << "Result of V1.at(10):" << V1.at(10) << endl;
    
    return;
}

/*  
 *  This function demonstrates the use of the following functions:
 *    -- assignment operator
 *    -- pop_back
 */
void tut05() {
    int A[] = {10,20,35,45,66,77};
    
    vector <int> V1(&(A[0]),&A[5]); 

    cout << "\nV1 is a vector cosntructed by copying from array.\n";    
    cout << "Size is: " << V1.size() << ". Capacity is: "  << V1.capacity() << endl;
   
    
    cout << "Using an assignment operator to copy the contents of V1 to V2\n";
    vector<int> V2 = V1; 
    cout << "Changing a value of V2 to disntiguish from V1\n";    
    V2[0] = 99;
    
    cout << "The contents of vector V1 are:\n";
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
    
    cout << "The contents of vector V2 are:\n";
    for (unsigned int i=0; i < V2.size(); i++)
        cout << V2[i] << " ";
    cout << endl;
 
    
    cout << "Popping back an element from the vector\n";
    cout << "The element to be removed is:" << V2.back() << endl;
    V2.pop_back();
    cout << "The contents of vector V2 are:\n";
    for (unsigned int i=0; i < V2.size(); i++)
        cout << V2[i] << " ";
    cout << endl;   

 
    return;
}



/*  
 *  This function demonstrates how to receive a vector as a parameter. 
 *  It should be passed by reference unless you are trying to make a 
 *  very inefficient program.
 */
void tut06_called(vector<int> &VP ) {

    cout << "The contents of vector received are:\n";
    for (unsigned int i=0; i < VP.size(); i++)
        cout << VP[i] << " ";
    cout << endl;
 
    cout << "\nLets modify the vector elements:\n";
    for (unsigned int i=0; i < VP.size(); i++)
        VP[i] = VP[i] * 10;        
    
    return;
}

void tut06_callee() {
    int A[] = {10,20,35,45,66,77};
    vector <int> V1(&(A[0]),&A[5]); 
    
    tut06_called(V1);
    
    cout << "The contents of vector after calling the  function are:\n";
    for (unsigned int i=0; i < V1.size(); i++)
        cout << V1[i] << " ";
    cout << endl;
}


/*
 *   This function demonstrates two ways to print an array. 
 */
void tut07() {
    int A[] = {10,20,35,45,66,77};
    
    
    cout << "Printing contents of A the traditional way:\n";
    for (unsigned int i=0; i<6; i++)
        cout << A[i] << "  ";
    cout << endl;
    
    cout << "Printing contents of A the pointer way:\n";
    for (int *ptr = &(A[0]); ptr != &(A[6]) ; ptr++)
        cout << *ptr << "  ";
    cout << endl;
    
}


/*
 *  This function demonstrates how to print a vector using iterators.
 */
void tut08() {
    int A[] = {10,20,35,45,66,77};
    vector <int> V1(&(A[0]),&A[5]); 
    
    cout << "Printing contents of V1 the traditional way:\n";
    for (unsigned int i=0; i<V1.size(); i++)
        cout << V1[i] << "  ";
    cout << endl;
    
    cout << "Printing contents of V1 using iterator:\n";
    vector<int>::iterator it;
    for (it = V1.begin(); it != V1.end() ; it++)
        cout << *it << "  ";
    cout << endl;
    
    
    cout << "Printing contents of V1 in reverse using revers iterator:\n";
    vector<int>::reverse_iterator rit;
    for (rit = V1.rbegin(); rit != V1.rend() ; rit++)
        cout << *rit << "  ";
    cout << endl;
    
}


/*
 *  This function demonstrates why iterators are important. Some structures
 *  such as the list, do not have direct access operators (like the []). The
 *  most effective way to traverse them is using iterators.
 */
void tut09() {
    int A[] = {10,20,35,45,66,77};
    list <int> L1(&(A[0]),&A[5]); 
    
    /*
    cout << "Trying to printing contents of L1 the traditional way:\n";
    for (unsigned int i=0; i<L1.size(); i++)
        cout << L1[i] << "  ";
    cout << endl;
    */
    
    
    cout << "Printing contents of L1 using iterator:\n";
    list<int>::iterator it;
    for (it = L1.begin(); it != L1.end() ; it++)
        cout << *it << "  ";
    cout << endl;
    
    
    cout << "Printing contents of L1 in reverse using reverse iterator:\n";
    list<int>::reverse_iterator rit;
    for (rit = L1.rbegin(); rit != L1.rend() ; rit++)
        cout << *rit << "  ";
    cout << endl;
    
}


void tut10() {
    vector <Article> V1;
    
    V1.push_back(Article("escoba"  ,1.45));
    V1.push_back(Article("mapo"    ,5.29));
    V1.push_back(Article("cepillo" ,3.25));
    V1.push_back(Article("jabon"   ,0.27));

    cout << "\nPrinting contents of V1:\n";
    vector<Article>::iterator it;
    for (it = V1.begin(); it != V1.end() ; it++)
        cout << *it << "  ";
    cout << endl;
    
    sort (V1.begin(), V1.end(), myCompare);
    
    cout << "\nPrinting contents of V1 after sort:\n";
    for (it = V1.begin(); it != V1.end() ; it++)
        cout << *it << "  ";
    cout << endl;
     
}


void myPrint (const Article &A) { cout << A << endl;}

void discount (Article &A) { A.setPrice(A.getPrice()*.85);}


void tut11() {
    vector <Article> V1;
    
    V1.push_back(Article("escoba"  ,1.45));
    V1.push_back(Article("mapo"    ,5.29));
    V1.push_back(Article("cepillo" ,3.25));
    V1.push_back(Article("jabon"   ,0.27));
    
    cout << "Printing contents of V1 using foreach:\n";

    for_each (V1.begin(), V1.end(), myPrint);
    for_each (V1.begin(), V1.end(), discount);
    for_each (V1.begin(), V1.end(), myPrint);

}

int main(int argc, char** argv) {
    //tut01();
    //tut02();
    //tut03();
    //tut04();
    //tut05();
    //tut06_callee();
    //tut07();
    //tut08();
    //tut09();
    //tut10();
    //tut11();
    return 0;
}