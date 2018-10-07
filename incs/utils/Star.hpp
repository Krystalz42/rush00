//
// Created by Alexandre ROULIN on 07/10/2018.
//

#ifndef STAR_HPP
#define STAR_HPP

#include <utils/Position.hpp>
#include <utils/List.hpp>

class Star {
private:
	Position	*_p;
	void 	drawStar();
	void	deleteStar();
	int 				_size;

	Star();

public:
	Star(Position *p);

	Star(Star const &i);
	~Star();


	void		moveStar();
};

#endif //Star_HPP
