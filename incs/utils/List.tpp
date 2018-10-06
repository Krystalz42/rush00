//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __LIST_HPP__
#define __LIST_HPP__

#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>

extern std::ofstream		file;
template <typename T>
class List {


public:
	typedef struct t_list{
		T					data;
		struct t_list		*next;
		struct t_list		*prev;
	}				lst;

	void				pushFront(T element);
	void 				erase(T element);
	struct t_list		*begin() {
		return beg;
	}

	List();
	List(List const &i);
	List &operator=(List const &i);

	virtual ~List();

private:
	struct t_list		*beg;
	struct t_list		*end;

};



template<typename T>
List<T>::List() {
	beg = 0;
	end = 0;
}

template<typename T>
void List<T>::pushFront(T element) {
	file << "Push" << std::endl;
	if (beg == 0) {
		file << "1st" << std::endl;

		beg = new t_list;
		beg->data = element;
		end = beg;
		beg->next = 0;
		beg->prev = 0;
	} else {
		file << "other" << std::endl;
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
	end->next = new t_list;
	end->next->data = element;
	end->next->prev = end->prev;
	end = end->next;
	end->next = 0;
}

template<typename T>
List<T>::List(List const &i) {
	*this = i;
}

template<typename T>
List<T> &List<T>::operator=(List<T> const &rhs) {
	if (rhs.beg != 0)
		for (List<T>::t_list *it = rhs->beg; it != 0; it = it->next) {
			pushFront(it->data);
		}
	return *this;
}

template<typename T>
List<T>::~List() {
	if (beg != 0)
		for (List<T>::t_list *it = beg; it != 0; it = it->next) {
			erase(it->data);
		}
}

#endif //__LIST_HPP__
