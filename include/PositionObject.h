/*
	PenjinTwo is Copyright (c)2005, 2006, 2007, 2008, 2009, 2010 Kevin Winfield-Pantoja

	This file is part of PenjinTwo.

	PenjinTwo is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	PenjinTwo is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with PenjinTwo.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef POSITIONOBJECT_H
#define POSITIONOBJECT_H

#include "Object.h"
#include "Vector2d.h"
using Penjin::Vector2d;
namespace Penjin
{
    class PositionObject : public Object
    {
        public:
            /** Default constructor */
            PositionObject();
            /** Default destructor */
            virtual ~PositionObject();

            template <class T>
            void setPosition(const T& pos){position.x=pos.x;position.y=pos.y;rescale();}

            template <class T>
            void setPosition(const T& x, const T& y){position.x=x;position.y=y;rescale();}

            void setX(const float& x);
            void setY(const float& y);
            float getX();
            float getY();

            Vector2d<float> getPosition()const;

            Vector2d<float> getScaledPosition();
        protected:
            void rescale();
            Vector2d<float> position;
            Vector2d<float> scaled;
    };
}
#endif // POSITIONOBJECT_H
