#include "DLinkedList.h"

bool DLinkedList::empty() const {			// is list empty?
	return (header->next == trailer);
}

const Elem& DLinkedList::front() const {	// get front element
	if (empty()) throw string("list is empty");
	return header->next->elem;
}

const Elem& DLinkedList::back() const {		// get back element
	if (empty()) throw string("list is empty");
	return trailer->prev->elem;
}


DLinkedList::DLinkedList() {				// constructor
	header = new DNode;						// create sentinels
	trailer = new DNode;
	header->next = trailer;					// have them point to each other
	trailer->prev = header;
}

DLinkedList::~DLinkedList() {				// destructor
	while (!empty()) removeFront();			// remove all but sentinels
	delete header;							// remove the sentinels
	delete trailer;
}

											// insert new node before v
void DLinkedList::add(DNode* v, const Elem& e) {
	DNode* u = new DNode;
	u->elem = e;							// create a new node for e
	u->next = v;							// link u in between v
	u->prev = v->prev;						// ...and v->prev
	v->prev->next = u;
	v->prev = u;
}

void DLinkedList::addFront(const Elem& e) {	// add to front of list
	add(header->next, e);
}

void DLinkedList::addBack(const Elem& e) {	// add to back of list
	add(trailer, e);
}


void DLinkedList::remove(DNode* v) {		// remove node v
	DNode* u = v->prev;						// predecessor
	DNode* w = v->next;						// successor
	u->next = w;							// unlink v from list
	w->prev = u;
	delete v;
}

void DLinkedList::removeFront() {			// remove from font
	if (empty()) throw string("list is empty");
	remove(header->next);
}

void DLinkedList::removeBack() {			// remove from back
	if (empty()) throw string("list is empty");
	remove(trailer->prev);
}
