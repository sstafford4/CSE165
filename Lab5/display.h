#pragma once
#include "Animal.h"
#include "Dog.h"

void display( const vector<Animal*>& list )
{
	for( int i = 0; i < list.size(); i++ )
		cout << list[i]->getName() << endl;
}
