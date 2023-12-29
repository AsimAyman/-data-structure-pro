#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>
using namespace std;

class QueueL
{

   private:
	// Node Class
	   class node
	   {
		public:
			int e;					// queue element
			node *next;				// pointer to next node
		}; // end of class node declaration

	typedef node * NodePointer;

	NodePointer front , rear;		// Pointers
	int count;		
	public:


      QueueL();						// Constructor
	  ~QueueL();					// Destructor
      void enqueue(int );			// Add to rear
	  void dequeue(int &);			// Remove from front		
	  void queueFront(int &) const;	// retrieve front
      bool queueIsEmpty() const;	// Test for Empty queue
	  int  queueLength() const;		// Queue Length
				

};
#include "q.cpp"
#endif