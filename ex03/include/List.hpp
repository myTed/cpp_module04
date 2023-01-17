#ifndef _LIST_H
#define _LIST_H

#include "AMateria.hpp"

class List
{
private:
	typedef AMateria*	Item;
	enum {DEFAULT_MAX_SIZE = 4};
	struct Node
	{
		Item			_item;
		struct Node*	_next;
	};
	int		_cntItems;
	int		_maxSize;
	Node*	_head;
	Node*	_tail;
public:
	List();
	~List();
	List(const List &rList);
	List& operator=(const List &rList);
	List(int maxSize);
public:
	bool				add(const Item& item);
	bool				del(int listIdx, Item* pItem, bool deleteInner = true);
	bool				peek(int listIdx, Item* pItem) const;
	void				clear();
	bool				isFull() const;
	bool				isEmpty() const;
};

#endif
