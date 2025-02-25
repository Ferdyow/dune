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
include CMakeFiles/Transports.DataStore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Transports.DataStore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Transports.DataStore.dir/flags.make

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o: CMakeFiles/Transports.DataStore.dir/flags.make
CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o: src/Transports/DataStore/Task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::DataStore::Task, TransportsDataStoreTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -o CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o -c /home/ferdy/lststools/dune/source/src/Transports/DataStore/Task.cpp

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::DataStore::Task, TransportsDataStoreTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/ferdy/lststools/dune/source/src/Transports/DataStore/Task.cpp > CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.i

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::DataStore::Task, TransportsDataStoreTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/ferdy/lststools/dune/source/src/Transports/DataStore/Task.cpp -o CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.s

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.requires:

.PHONY : CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.requires

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.provides: CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.requires
	$(MAKE) -f CMakeFiles/Transports.DataStore.dir/build.make CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.provides.build
.PHONY : CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.provides

CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.provides.build: CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o


# Object files for target Transports.DataStore
Transports_DataStore_OBJECTS = \
"CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o"

# External object files for target Transports.DataStore
Transports_DataStore_EXTERNAL_OBJECTS =

libTransports.DataStore.a: CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o
libTransports.DataStore.a: CMakeFiles/Transports.DataStore.dir/build.make
libTransports.DataStore.a: CMakeFiles/Transports.DataStore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTransports.DataStore.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.DataStore.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Transports.DataStore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Transports.DataStore.dir/build: libTransports.DataStore.a

.PHONY : CMakeFiles/Transports.DataStore.dir/build

CMakeFiles/Transports.DataStore.dir/requires: CMakeFiles/Transports.DataStore.dir/src/Transports/DataStore/Task.cpp.o.requires

.PHONY : CMakeFiles/Transports.DataStore.dir/requires

CMakeFiles/Transports.DataStore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.DataStore.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Transports.DataStore.dir/clean

CMakeFiles/Transports.DataStore.dir/depend:
	cd /home/ferdy/lststools/dune/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source/CMakeFiles/Transports.DataStore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Transports.DataStore.dir/depend

