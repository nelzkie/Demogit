//
//  ConstantObjectSample.cpp
//  TheNewBoston
//
//  Created by Bellchan on 1/16/14.
//  Copyright (c) 2014 Bellchan. All rights reserved.
//

#include "ConstantObjectSample.h"
using namespace std;
ConstantObjectSample::ConstantObjectSample(){
    
}

void ConstantObjectSample::printShiz(){
    
    std::cout<<"this is not a constant object! " <<endl;
    
}
void ConstantObjectSample::printShiz2() const { // this is how you define a constant function
    
    cout<<" This is a constant Object!";
}