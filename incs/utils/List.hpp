//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __LIST_HPP__
#define __LIST_HPP__

template <typename T>
class List {
private:

	typedef struct t_list{
		T					data;
		struct t_list		*next;
		struct t_list		*prev;
	}				list;

	list		*begin;
	list		*end;

public:
	typedef void (*operator_f)(void);

	void		pushFront(T *element);
	void 		erase(T *element);
	T			*begin();
	List();
};

template<typename T>
List<T>::List() {

}

template<typename T>
T *List<T>::begin() {
	return begin;
}

template<typename T>
void List<T>::pushFront(T *element) {
	end->next = element;
	element->prev = end;
	end = end->next;
	end->next = 0;
}

template<typename T>
void List<T>::erase(T *element) {
	for (list *it = begin; it != 0; it = it->next) {
		if (it == element) {
			it->prev->next = it->next;
			it->next->prev = it->prev;
			delete element;
		}
	}
}


#endif //__LIST_HPP__
