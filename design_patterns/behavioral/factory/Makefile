CXX = g++
CXXFLAGS = -g -Wall -Iinclude --std=c++17
SRC_DIR = ./src
OBJ_DIR = ./obj
TARGET = Coffee_maker


${TARGET}: main.o Cappuccino.o CoffeFactory.o
	${CXX} ${CXXFLAGS} main.o Cappuccino.o CoffeFactory.o -o ${TARGET}
	
Cappuccino.o: 
	${CXX} ${CXXFLAGS} -c ${SRC_DIR}/Cappuccino.cpp 

CoffeFactory.o:
	${CXX} ${CXXFLAGS} -c ${SRC_DIR}/CoffeFactory.cpp

main.o:
	${CXX} ${CXXFLAGS} -c ${SRC_DIR}/main.cpp
	

run:
	./${TARGET}

clean:
	rm -rfv *.o ${TARGET} 