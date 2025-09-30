# Folders where the .cpp and .h files are contained:
SRC_FOLDER := sources
INCL_FOLDER := includes

# Names of the .cpp files for the code:
SRC_NAMES = Book.cpp EBook.cpp Library.cpp
SRC_FILES = $(addprefix $(SRC_FOLDER)/, $(SRC_NAMES))
HEAD_FILES = $(addprefix $(INCL_FOLDER)/, $(SRC_NAMES:.cpp=.h))
OBJ_FILES = $(SRC_NAMES:.cpp=.o)

TARGET = Library

all: main.o files.o
	g++ main.o $(OBJ_FILES) -o $(TARGET)

main.o: main.cpp
	g++ -c main.cpp -I $(INCL_FOLDER)

files.o: $(SRC_FILES) $(HEAD_FILES)
	g++ -c $(SRC_FOLDER)/*.cpp -I $(INCL_FOLDER)

# Clean rule to remove compiled files
clean:
	del $(OBJ_FILES) $(TARGET).exe main.o