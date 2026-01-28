CXX = g++
CXXFALGS = -g -std=c++17 -Iinclude
SRCDIR = ./src
OBJDIR = ./obj
SRCGEN = main.cpp
TARGET = IT_Support_Tickets
MAINOBJ = main.o

all: ${TARGET}

${TARGET}: ${MAINOBJ} 
	${CXX} ${CXXFALGS} ${OBJDIR}/${MAINOBJ} ${OBJDIR}/Junior.o ${OBJDIR}/BaseHandler.o ${OBJDIR}/Senior.o ${OBJDIR}/Manager.o -o ${TARGET}

BaseHandler.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/BaseHandler.cpp -o ${OBJDIR}/BaseHandler.o

Junior.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/Junior.cpp -o ${OBJDIR}/Junior.o

Senior.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/Senior.cpp -o ${OBJDIR}/Senior.o

Manager.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/Manager.cpp -o ${OBJDIR}/Manager.o


${MAINOBJ}: Junior.o BaseHandler.o Senior.o Manager.o
	${CXX} ${CXXFALGS} -c ${SRCGEN} -o ${OBJDIR}/${MAINOBJ}

run:
	chmod 755 ${TARGET}
	./${TARGET}

clean:
	rm -rfv ${TARGET}
	rm -rfv *.o
	rm -rfv ${OBJDIR}/*