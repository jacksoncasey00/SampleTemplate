#pragma once

#include <string>
#include "Node.h"

template<class ItemType>
class  IList {
public:

	IList();

	/** Returns true  if list is empty, otherwise false */
	virtual bool isEmpty() const ;
	/** Returns the number of elements in the LinkedList */
	//virtual int getSize() const = 0;

	/** Adds a value to the LinkedList.  Adds the value to the end of the List.  Return true if able to, otherwise false */
	virtual bool add(ItemType val) = 0;
	/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
	Will only remove one entry if there are multiple entries with the same value */
	virtual bool remove(ItemType val) = 0;
	/** Remove  all elements from LinkedList */
	virtual void clear() = 0;
        /** Generates a string of the contents of the LinkedList, and lists them in order.  */
	virtual std::string toString() const = 0;

	

protected:
	int m_count;

};



template<class ItemType>
class ArrayBasedList : public IList<ItemType>
{
public:
	ArrayBasedList();
	/** Adds a value to the LinkedList.  Adds the value to the end of the List. Return true if able to, otherwise false */
	bool add(ItemType val) override;
	/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
	Will only remove one entry if there are multiple entries with the same value */
	bool remove(ItemType val) override;
	/** Remove  all elements from LinkedList */
	void clear() override;
	virtual ~ArrayBasedList() ;
	/** Generates a string of the contents of the LinkedList, and lists them in order.  */
	std::string toString() const override;
private:
	ItemType m_values[10];

};

template<class ItemType>
class PointerBasedLinkedList : public IList<ItemType>
{
public:
	PointerBasedLinkedList();
	/** Adds a value to the LinkedList. Adds the value to the end of the List. Return true if able to, otherwise false */
	bool add(ItemType val) override;
	/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
	Will only remove one entry if there are multiple entries with the same value */
	bool remove(ItemType val)  override;
	/** Remove  all elements from LinkedList */
	void clear()  override;
	virtual ~PointerBasedLinkedList();
	/** Generates a string of the contents of the LinkedList, and lists them in order.  */
	std::string toString() const override;
private:
	Node<ItemType> * m_head;
	Node<ItemType> * m_tail;// this is optional to use, but it does make things easier
};


#include "LinkedList.cpp"
