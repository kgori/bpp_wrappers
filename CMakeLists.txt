# M M Reid (2013). CMake file to compile Boost.Python example. Extend as you require.
cmake_minimum_required(VERSION 2.8)

# Get Python libraries and header locations.
set(PYTHON_LIBRARY        "/usr/local/Cellar/python/2.7.6/Frameworks/Python.framework/Versions/Current/lib/libpython2.7.dylib")
set(PYTHON_INCLUDE_DIR    "/usr/local/Cellar/python/2.7.6/Frameworks/Python.framework/Versions/2.7/include/python2.7")

# This very much depends on what boost wsa compiled with
FIND_PACKAGE(PythonInterp)
FIND_PACKAGE(PythonLibs 2 REQUIRED)

# Get Boost libraries and header locations.
set(BOOST_ROOT          "/usr/local/Cellar/boost/1.55.0")
set(BOOST_INCLUDEDIR    "/usr/local/include")
set(BOOST_LIBRARYDIR    "/usr/local/lib")
# here we only define python but we could add in more if needed.
FIND_PACKAGE(Boost COMPONENTS python REQUIRED)
set(CMAKE_CXX_FLAGS "-v -g -W -Wall -O2 -fsigned-char -Werror")

# Test the build with the example script.
ENABLE_TESTING()


set(Bpp_LIBRARIES	"-lbpp-core")
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})
LINK_LIBRARIES(${Boost_LIBRARIES} ${PYTHON_LIBRARIES} ${Bpp_LIBRARIES}) # Deprecated but so convenient!

# Point to the source code.

ADD_SUBDIRECTORY(FileTools)
