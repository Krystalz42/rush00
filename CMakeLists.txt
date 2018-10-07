cmake_minimum_required(VERSION 3.12)
project(_)

set(CMAKE_CXX_STANDARD 98)

include_directories(incs)

add_executable(_
        Makefile incs/utils/IShooter.hpp incs/Ship/AShip.hpp srcs/main.cpp incs/Bullets/ABullet.hpp incs/utils/Position.hpp srcs/utils/Position.cpp srcs/Bullets/ABullet.cpp srcs/Ship/AShip.cpp srcs/Bullets/BulletsManager.cpp incs/Bullets/BulletsManager.hpp srcs/Bullets/BasicBullet.cpp srcs/Bullets/MobBullet.cpp incs/Bullets/BasicBullet.hpp  incs/Bullets/MobBullet.hpp incs/ft_retro.h incs/utils/List.hpp srcs/Ship/ShipMob.cpp incs/Ship/ShipMob.hpp incs/utils/ICollision.hpp incs/utils/IBulletsManager.hpp srcs/Ship/ShipManager.cpp incs/Ship/ShipManager.hpp incs/utils/IShipsManager.hpp srcs/Space.cpp incs/Space.hpp incs/utils/Utils.hpp srcs/utils/Utils.cpp srcs/Ship/ShipPlayer.cpp incs/Ship/ShipPlayer.hpp srcs/Weapon/AWeapon.cpp incs/Weapon/AWeapon.hpp srcs/Weapon/WeaponBasic.cpp incs/Weapon/WeaponBasic.hpp incs/Weapon/WeaponMob.hpp srcs/Weapon/WeaponMob.cpp srcs/Weapon/WeaponTripleDiagonal.cpp incs/Weapon/WeaponTripleDiagonal.hpp incs/Ship/ShipBoss.hpp srcs/Ship/ShipBoss.cpp)
