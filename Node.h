#pragma once
template <class ItemType>
class Node
{
private:
	ItemType m_value;
	Node * m_next;

public:
	Node() = delete;
	Node(ItemType val);
	Node(ItemType val, Node * nextNode);
	void setItem(const ItemType& val);
	void setNext(Node* nextNodePtr);
	ItemType getItem() const;
	Node * getNext() const;
	virtual ~Node();
	
};

#include "Node.cpp"