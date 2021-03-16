//
//  hashTable.hpp
//  LAB3
//
//  Created by Берлинский Ярослав Владленович on 16.03.2021.
//

#ifndef hashTable_hpp
#define hashTable_hpp

#include <stdio.h>
#include <iostream>
#include "structures.hpp"

struct hashTable{
    int size = 98215;
    List *linkedList = new List[size];;
    hashTable();
    int generateHash(string word);
    void push_back(word definition);
    word find(word term);
    void output();
    

};



#endif /* hashTable_hpp */
