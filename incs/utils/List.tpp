//
// Created by Alexandre ROULIN on 06/10/2018.
//

#ifndef RUSH00_LIST_HPP
#define RUSH00_LIST_HPP

template <typename T>
class List {
private:

	typedef struct t_list{
		T					data;
		struct t_list		lst;
	}				list;

	list		*lst;

public:
	typedef void (*operator_f)(void);

	void pushBack(T *element);
	void pushFront(T *element);
	T		*begin();
	T		*end();
	List();
};

template<typename T>
List<T>::List() {
}


template<typename T>
T *List<T>::begin() {
	return 0;
}

template<typename T>
T *List<T>::end() {
	return 0;
}

template<typename T>
void List<T>::pushBack(T *element) {

}

template<typename T>
void List<T>::pushFront(T *element) {

}


#endif //RUSH00_LIST_HPP
