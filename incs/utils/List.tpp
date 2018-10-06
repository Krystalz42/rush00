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

	void				pushFront(T *element);
	void 				erase(T *element);
	struct t_list		*begin() {
		return beg;
	}

	List();
private:
	struct t_list		*beg;
	struct t_list		*end;

};



template<typename T>
List<T>::List() {

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
	for (lst *it = beg; it != 0; it = it->next) {
		if (it == element) {
			it->prev->next = it->next;
			it->next->prev = it->prev;
			delete element;
		}
	}
}



#endif //__LIST_HPP__
