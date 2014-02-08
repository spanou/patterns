/*
 * singleton.cpp
 *
 *  Created on: Jan 31, 2014
 *      Author: sakis
 */
#include "singleton.h"

QSingleton* QSingleton::itsThis = 0;

const char* const QSingleton::sayHi(){
	return("Hi There\n");
}

QSingleton& QSingleton::getInstance(){

	if(0==itsThis){
		itsThis = new QSingleton;
	}

	return(*itsThis);
}


//
// C'Actor, D'Actor and Copy C'Actor are private
//
QSingleton::QSingleton(){
}

QSingleton::QSingleton(const QSingleton& rhs){

}

//
// The D'Actor has to clean up the allocation
//
QSingleton::~QSingleton(){
}
