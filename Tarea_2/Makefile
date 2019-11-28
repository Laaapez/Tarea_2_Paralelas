FILE = Matrices.txt
CXX = g++
BUILD_DIR = dist
BINARY = compilado
CXXFLAGS = -g3 -Wall
MKDIR = mkdir -p
OBJS = main.o funciones.o
LIBS=-lm

directorios: 
	$(MKDIR) $(BUILD_DIR)

%o. %.cpp:
	$(CXX) -c $< -o $@

all: clean directorios $(OBJS)
	$(CXX) $(CXXFLAGS) $(LIBS) -o ./$(BUILD_DIR)/$(BINARY) $(OBJS)

exec:
	./$(BUILD_DIR)/$(BINARY) -m $(FILE)

clean:
	rm -fr *.o *.o $(BINARY) $(BUILD_DIR)

.DEFAULT_GOAL := all