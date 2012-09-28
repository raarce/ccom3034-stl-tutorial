/* 
 * File:   Article.h
 * Author: rarce
 *
 * Created on March 24, 2012, 11:04 AM
 */

#ifndef ARTICLE_H
#define	ARTICLE_H

#include <string>
#include <iostream>

using namespace std;

class Article {
private:
    string desc;
    float price;
public:
    Article() {};
    Article(string d, float p): desc(d), price(p) {}
    float getPrice() {return price;}
    void setPrice(float p) {price = p;}
    int operator< (const Article &B) const {
        return (price < B.price);
    }
    int operator> (const Article &B) const  {
        return (price > B.price);
    }
    
    int operator() (const Article &A, const Article &B) {
        return (A.price > B.price);
    }  
    void display(ostream &out) const { out << desc << ", " << price;}
};


bool myCompare(const Article &A, const Article &B) { return (A < B);}

ostream &operator<< (ostream &out, const Article &A) {
    A.display(out);
    return out;
}


#endif	/* ARTICLE_H */
