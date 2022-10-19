#pragma once

#include <memory>

template<class ItemType>
class Node
{
private:
	ItemType m_value;
	std::shared_ptr<Node<ItemType>>  m_next;

public:
	Node() = delete;
	Node(ItemType val);
	Node(ItemType val, std::shared_ptr<Node<ItemType>> nextNode);
	void setItem(const ItemType& val);
	void setNext(std::shared_ptr<Node<ItemType>> nextNodePtr);
	int getItem() const;
	std::shared_ptr<Node<ItemType>> getNext() const;
	virtual ~Node();
	
};

#include "Node.cpp"
