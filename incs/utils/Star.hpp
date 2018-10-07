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

	Star();

public:
	Star(Position *p);
	Star	&operator=(Star const &i);
	Star(Star const &i);
	~Star();


	void		moveStar();
};

#endif //Star_HPP
