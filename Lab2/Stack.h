#pragma once

struct Stack {
	struct Link {
		void* data;
		Link* next;
		
		void initialize( void* dat, Link* nxt );
	}* head;
	
	// third task constructors
	Stack(): head(nullptr), deletecb(nullptr){} // default that creates an empty stack
	Stack(int n): head(nullptr), deletecb(nullptr){ // int parameter that fills it up and adds 0.1 each time
		for (int i = 0; i < n; i++){
			push(new double(1.0 + i * 0.1));
		}
	}

	void initialize();
	//void cleanup();
	void push( void* dat );
	void* peek();
	void* pop();

	void (*deletecb)(void* pt); // added for second task
	void setDeleteCallback(void(*delcb)(void* pt)); // added for second task
	void cleanup(); // moved over here for the second task

	//third task destructor
	~Stack(); // destructor defined in stack.cpp 
};
