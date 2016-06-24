/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DubSub.h
 * Author: KJMACBOOK
 *
 * Created on June 23, 2016, 5:30 PM
 */
#pragma once
#include <iostream>#pragma once
#include <iostream>

#ifndef DOUBLESUB_H
#define DOUBLESUB_H
class DoubleSub
{
	//global << overload
	friend std::ostream &operator<<(std::ostream &, const DoubleSub &);
	
public:
	// constructor/destructor
	explicit DoubleSub(int, int);
	~DoubleSub(void);
	// overload operators
	int &operator() (int, int);
	int operator() (int,int) const;

private:         // private variables
	size_t size;
	int *ptr;
	int rowz;
	int columnz;
};
#endif