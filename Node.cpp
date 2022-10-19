
#include <iostream>

template<class ItemType>
Node<ItemType>::Node(ItemType val) : m_value(val), m_next(nullptr)
{

}

template<class ItemType>
Node<ItemType>::Node(ItemType val, std::shared_ptr<Node<ItemType>> nextNode) : m_value(val), m_next(nextNode)
{

}
template<class ItemType>
void Node<ItemType>::setItem(const ItemType& val)
{
	m_value = val;
}

template<class ItemType>
void Node<ItemType>::setNext(std::shared_ptr<Node<ItemType>> nextNodePtr)
{
	m_next = nextNodePtr;
}

template<class ItemType>
int Node<ItemType>::getItem() const
{
	return m_value;
}

template<class ItemType>
std::shared_ptr<Node<ItemType>>  Node<ItemType>::getNext() const
{
	return m_next;
}

template<class ItemType>
Node<ItemType>::~Node()
{
	std::cout << "Deleting node with value " << m_value << std::endl;
	
	// you can recursively handle this which would require some code
	// Otherwise you need to delete each node individuall in the owner of the Nodes (i.e. the LinkedList)
}