# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ferdy/lststools/dune/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ferdy/lststools/dune/source

# Include any dependencies generated for this target.
include CMakeFiles/dune-gsmux-tsv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dune-gsmux-tsv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dune-gsmux-tsv.dir/flags.make

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o: CMakeFiles/dune-gsmux-tsv.dir/flags.make
CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o: programs/gsmux/gsmux-tsv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o -c /home/ferdy/lststools/dune/source/programs/gsmux/gsmux-tsv.cpp

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ferdy/lststools/dune/source/programs/gsmux/gsmux-tsv.cpp > CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.i

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ferdy/lststools/dune/source/programs/gsmux/gsmux-tsv.cpp -o CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.s

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.requires:

.PHONY : CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.requires

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.provides: CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.requires
	$(MAKE) -f CMakeFiles/dune-gsmux-tsv.dir/build.make CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.provides.build
.PHONY : CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.provides

CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.provides.build: CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o


# Object files for target dune-gsmux-tsv
dune__gsmux__tsv_OBJECTS = \
"CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o"

# External object files for target dune-gsmux-tsv
dune__gsmux__tsv_EXTERNAL_OBJECTS =

dune-gsmux-tsv: CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o
dune-gsmux-tsv: CMakeFiles/dune-gsmux-tsv.dir/build.make
dune-gsmux-tsv: libdune-core.a
dune-gsmux-tsv: CMakeFiles/dune-gsmux-tsv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dune-gsmux-tsv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dune-gsmux-tsv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dune-gsmux-tsv.dir/build: dune-gsmux-tsv

.PHONY : CMakeFiles/dune-gsmux-tsv.dir/build

CMakeFiles/dune-gsmux-tsv.dir/requires: CMakeFiles/dune-gsmux-tsv.dir/programs/gsmux/gsmux-tsv.cpp.o.requires

.PHONY : CMakeFiles/dune-gsmux-tsv.dir/requires

CMakeFiles/dune-gsmux-tsv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dune-gsmux-tsv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dune-gsmux-tsv.dir/clean

CMakeFiles/dune-gsmux-tsv.dir/depend:
	cd /home/ferdy/lststools/dune/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source/CMakeFiles/dune-gsmux-tsv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dune-gsmux-tsv.dir/depend

