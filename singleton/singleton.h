/*
 * signleton.h
 *
 *  Created on: Jan 31, 2014
 *      Author: sakis
 */


/**
 * TODO: Find a way for eclipse to generate UUIDs for the ifndef macros
 */
#ifndef SIGNLETON_H_
#define SIGNLETON_H_

class QSingleton {
public:
	static QSingleton& getInstance();
	const char* const sayHi();
	virtual ~QSingleton();

private:
	//
	// C'Actor, D'Actor and Copy C'Actor are private
	//
	QSingleton();
	QSingleton(const QSingleton& rhs);


	//
	// Only one instance will be created
	//
	static QSingleton* itsThis;
};


#endif /* SIGNLETON_H_ */
