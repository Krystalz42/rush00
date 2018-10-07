//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __LIST_HPP__
#define __LIST_HPP__

#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>

extern std::ofstream file;

template<typename T>
class List {
public:
	struct t_list {
		T data;
		struct t_list *next;
		struct t_list *prev;
	};

	void pushFront(T element);

	void erase(T element);

	int size();

	t_list *begin() const {
		return beg;
	}

	t_list *last() const {
		return end;
	}

	List();

	List(List const &i);

	List &operator=(List const &i);

	virtual ~List();

protected:
	struct t_list *beg;
	struct t_list *end;
	int _size;

};


/** Static **/
/** Constructor **/

template<typename T>
List<T>::List() {
	beg = 0;
	end = 0;
	_size = 0;
}

template<typename T>
List<T>::List(List const &i) {
	*this = i;
}

/** Public **/

template<typename T>
void List<T>::pushFront(T element) {
	_size++;
	if (beg == 0) {
		beg = new t_list;
		beg->data = element;
		end = beg;
		beg->next = 0;
		beg->prev = 0;
	} else {
		t_list *element_lst = new t_list;
		element_lst->data = element;
		end->next = element_lst;
		element_lst->prev = end;
		end = element_lst;
		element_lst->next = 0;
	}
}

template<typename T>
void List<T>::erase(T element) {
	for (t_list *it = beg; it != 0; it = it->next) {
		if (it->data == element) {
			_size--;
			if (it == beg)
				beg = beg->next;
			if (it == end)
				end = end->prev;
			if (it->next != 0)
				it->next->prev = it->prev;
			if (it->prev != 0)
				it->prev->next = it->next;
			delete it;
			return;

		}
	}
}

template<typename T>
int List<T>::size() {
	return _size;
}

/** Private **/
/** Operator **/

template<typename T>
List<T> &List<T>::operator=(List<T> const &rhs) {
	if (rhs.beg != 0)
		for (List<T>::t_list *it = rhs.beg; it != 0; it = it->next) {
			pushFront(it->data);
		}
	return *this;
}

/** Destructor **/
template<typename T>
List<T>::~List() {

	if (beg != 0) {
		List<T>::t_list *tmp;
		for (List<T>::t_list *it = beg; it != 0;) {
			tmp = it;
			it = it->next;
			delete tmp;
		}
	}
}


#endif //__LIST_HPP__
