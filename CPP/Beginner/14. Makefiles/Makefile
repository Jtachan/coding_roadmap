# The following makefile is defined only for Windows

# Folders
SRC_FOLDER := src
HEAD_FOLDER := include

# The name of the executable.
PROG_NAME = myprog

# Program files
SRC_NAMES := Circle.cpp Rectangle.cpp Triangle.cpp
SRC_FILES := $(addprefix $(SRC_FOLDER)/, $(SRC_NAMES))
HEAD_FILES := $(addprefix $(HEAD_FOLDER)/, $(SRC_NAMES:.cpp=.h))
OBJS_FILES := $(SRC_NAMES:.cpp=.o)

output: main.o my_lib.o
	g++ main.o $(OBJS_FILES) -o $(PROG_NAME)

my_lib.o: $(SRC_FILES)
	$(CXX) -c $(SRC_FOLDER)/*.cpp -I $(HEAD_FOLDER)

main.o: main.cpp
	$(CXX) -c main.cpp -I $(HEAD_FOLDER)

clean:
	del myprog.exe $(OBJS_FILES) main.o
