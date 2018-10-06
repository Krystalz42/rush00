cmake_minimum_required(VERSION 3.12)
project(_)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(_
        Makefile incs/utils/IShooter.hpp incs/Ship/AShip.hpp srcs/main.cpp incs/Bullets/ABullet.hpp incs/utils/Position.hpp srcs/utils/Position.cpp srcs/Bullets/ABullet.cpp srcs/Ship/AShip.cpp srcs/Bullets/BulletsManager.cpp incs/Bullets/BulletsManager.hpp srcs/Bullets/BasicBullet.cpp incs/Bullets/BasicBullet.hpp incs/ft_retro.h incs/utils/List.tpp srcs/Ship/ShipMob.cpp incs/Ship/ShipMob.hpp incs/utils/ICollision.hpp incs/utils/IBulletsManager.hpp srcs/Ship/ShipManager.cpp incs/Ship/ShipManager.hpp)
