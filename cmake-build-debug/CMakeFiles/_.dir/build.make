# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexandreroulin/pool_cpp/rush00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_.dir/flags.make

CMakeFiles/_.dir/srcs/main.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/main.cpp.o: ../srcs/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_.dir/srcs/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/main.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/main.cpp

CMakeFiles/_.dir/srcs/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/main.cpp > CMakeFiles/_.dir/srcs/main.cpp.i

CMakeFiles/_.dir/srcs/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/main.cpp -o CMakeFiles/_.dir/srcs/main.cpp.s

CMakeFiles/_.dir/srcs/utils/Position.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/utils/Position.cpp.o: ../srcs/utils/Position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/_.dir/srcs/utils/Position.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/utils/Position.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/utils/Position.cpp

CMakeFiles/_.dir/srcs/utils/Position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/utils/Position.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/utils/Position.cpp > CMakeFiles/_.dir/srcs/utils/Position.cpp.i

CMakeFiles/_.dir/srcs/utils/Position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/utils/Position.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/utils/Position.cpp -o CMakeFiles/_.dir/srcs/utils/Position.cpp.s

CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o: ../srcs/Bullets/ABullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/ABullet.cpp

CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/ABullet.cpp > CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.i

CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/ABullet.cpp -o CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.s

CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o: ../srcs/Ship/AShip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/AShip.cpp

CMakeFiles/_.dir/srcs/Ship/AShip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/Ship/AShip.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/AShip.cpp > CMakeFiles/_.dir/srcs/Ship/AShip.cpp.i

CMakeFiles/_.dir/srcs/Ship/AShip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/Ship/AShip.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/AShip.cpp -o CMakeFiles/_.dir/srcs/Ship/AShip.cpp.s

CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o: ../srcs/Bullets/BulletsManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BulletsManager.cpp

CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BulletsManager.cpp > CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.i

CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BulletsManager.cpp -o CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.s

CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o: ../srcs/Bullets/BasicBullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BasicBullet.cpp

CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BasicBullet.cpp > CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.i

CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/Bullets/BasicBullet.cpp -o CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.s

CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o: CMakeFiles/_.dir/flags.make
CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o: ../srcs/Ship/ShipMob.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o -c /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/ShipMob.cpp

CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/ShipMob.cpp > CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.i

CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandreroulin/pool_cpp/rush00/srcs/Ship/ShipMob.cpp -o CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.s

# Object files for target _
__OBJECTS = \
"CMakeFiles/_.dir/srcs/main.cpp.o" \
"CMakeFiles/_.dir/srcs/utils/Position.cpp.o" \
"CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o" \
"CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o" \
"CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o" \
"CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o" \
"CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o"

# External object files for target _
__EXTERNAL_OBJECTS =

_ : CMakeFiles/_.dir/srcs/main.cpp.o
_ : CMakeFiles/_.dir/srcs/utils/Position.cpp.o
_ : CMakeFiles/_.dir/srcs/Bullets/ABullet.cpp.o
_ : CMakeFiles/_.dir/srcs/Ship/AShip.cpp.o
_ : CMakeFiles/_.dir/srcs/Bullets/BulletsManager.cpp.o
_ : CMakeFiles/_.dir/srcs/Bullets/BasicBullet.cpp.o
_ : CMakeFiles/_.dir/srcs/Ship/ShipMob.cpp.o
_ : CMakeFiles/_.dir/build.make
_ : CMakeFiles/_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable _"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_.dir/build: _

.PHONY : CMakeFiles/_.dir/build

CMakeFiles/_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_.dir/clean

CMakeFiles/_.dir/depend:
	cd /Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandreroulin/pool_cpp/rush00 /Users/alexandreroulin/pool_cpp/rush00 /Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug /Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug /Users/alexandreroulin/pool_cpp/rush00/cmake-build-debug/CMakeFiles/_.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_.dir/depend

