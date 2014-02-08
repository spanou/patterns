/*
 * QSingletonTemplate.h
 *
 *  Created on: Jan 31, 2014
 *      Author: sakis
 */

#ifndef QSINGLETONTEMPLATE_H_
#define QSINGLETONTEMPLATE_H_

template <class T> class QSingletonTemplate {
public:
	static T& getInstance(){
		if(0 == theInstance ){
			theInstance = new T;
			return(*theInstance);
		}
	}
	virtual ~QSingletonTemplate();

private:
	QSingletonTemplate();
	static T* theInstance;
};

#endif /* QSINGLETONTEMPLATE_H_ */
