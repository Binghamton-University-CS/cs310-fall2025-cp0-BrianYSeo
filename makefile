CXX      := g++
CXXFLAGS := -Wall -Wextra -std=gnu++17 -g

OBJS := Animal.o AnimalsInZoo.o zoo.o

all: zoo

zoo: $(OBJS)
	$(CXX) $(OBJS) -o zoo

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h
	$(CXX) $(CXXFLAGS) -c AnimalsInZoo.cpp

zoo.o: zoo.cpp Animal.h AnimalsInZoo.h
	$(CXX) $(CXXFLAGS) -c zoo.cpp

.PHONY: clean
clean:
	rm -f *.o zoo
