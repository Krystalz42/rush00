//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef __LIST_HPP__
#define __LIST_HPP__

template <typename T>
class List {


public:
	typedef struct t_list{
		T					data;
		struct t_list		*next;
		struct t_list		*prev;
	}				lst;

	typedef void (*operator_f)(void);

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

}

template<typename T>
void List<T>::pushFront(T element) {
	for (lst *it = beg; it != 0; it = it->next) {
		if (it->data == element) {
			it->prev->next = it->next;
			it->next->prev = it->prev;
		}
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
