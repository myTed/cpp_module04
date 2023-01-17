#include "List.hpp"
#include <iostream>
#include <cstdlib>

List::List()
: _cntItems(0), _maxSize(DEFAULT_MAX_SIZE), _head(0), _tail(0)
{
	std::cout << "List Default Constructor Called\n";
}

List::List(int maxSize)
: _cntItems(0), _maxSize(maxSize), _head(0), _tail(0)
{
	std::cout << "List NonDefault Constructor Called\n";
}

List::~List()
{
	std::cout << "List Destructor Called\n";
	clear();
}
	
List::List(const List &rList)
: _cntItems(0), _maxSize(rList._maxSize), _head(0), _tail(0)
{
	std::cout << "List Copy Constructor Called\n";
	Item 	item;
	int		idx = 0;
	for (; rList.peek(idx, &item) && add(item->clone()); idx++) {};
	if (idx != rList._cntItems)
	{
		std::cout << "List Copy Error\n";
		std::exit(1);
	}
}
	
List& List::operator=(const List &rList)
{
	std::cout << "List Copy Assignment Operator Called\n";
	if (this == &rList)
		return (*this);
	clear();
	Item	item;
	int		idx = 0;
	for (; rList.peek(idx, &item) && add(item->clone()); idx++) {};
	if (idx != rList._cntItems)
	{
		std::cout << "List Copy Error\n";
		exit(1);
	}
	return (*this);
}
	
bool	List::add(const Item &item)
{
	if (isFull())
		return (false);
	Node* pNew = new (std::nothrow) Node;
	if (pNew == 0)
	{
		std::cout << "Memory Allocation Error!\n";
		std::exit(1);
	}
	pNew->_item = item;
	pNew->_next = 0;
	if (_head == 0)
	{
		_head = pNew;
		_tail = pNew;
	}
	else
	{
		_tail->_next = pNew;
		_tail = pNew;
	}
	++_cntItems;
	return (true);
}
	
bool	List::del(int listIdx, Item* pItem, bool deleteInner)
{
	if (isEmpty())
		return (false);
	Node* pDel = _head;
	Node* pPreDel = pDel;
	for (int idx = 0; idx < listIdx; idx++)
	{
		pPreDel = pDel;
		pDel = pDel->_next;
	}
	pPreDel->_next = pDel->_next;
	*pItem = pDel->_item;
	if (_tail == pDel)
		_tail = pPreDel;
	if (_head == pDel)
		_head = pDel->_next;
	if(deleteInner)
		delete pDel->_item;
	delete pDel;
	--_cntItems;
	return (true);
}
	
bool	List::peek(int listIdx, Item* pItem) const
{
	if (listIdx >= _cntItems)
		return (false);
	Node* pSearch = _head;
	for (int idx = 0; idx < listIdx; idx++)
		pSearch = pSearch->_next;
	*pItem = pSearch->_item;
	return (true);
}
	
void	List::clear()
{
	Item tmpItem;
	int	tmpCnt = _cntItems;
	for (int idx = 0; idx < tmpCnt; idx++)
		del(0, &tmpItem);
}
	
bool	List::isFull() const
{
	if (_cntItems == _maxSize)
		return (true);
	return (false);
}
	
bool	List::isEmpty() const
{
	if (_cntItems == 0)
		return (true);
	return (false);
}
