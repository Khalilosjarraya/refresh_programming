CXX = g++
CXXFALGS = -g -std=c++17 -Iinclude
SRCDIR = ./src
OBJDIR = ./obj
SRCGEN = main.cpp
TARGET = validate_email
MAINOBJ = main.o

all: ${TARGET}

${TARGET}: ${MAINOBJ} 
	${CXX} ${CXXFALGS} ${OBJDIR}/${MAINOBJ} ${OBJDIR}/EmailRegValidator.o ${OBJDIR}/BaseValidator.o ${OBJDIR}/LengthValidator.o ${OBJDIR}/NonEmptyValidator.o -o ${TARGET}

BaseValidator.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/BaseValidator.cpp -o ${OBJDIR}/BaseValidator.o

EmailRegValidator.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/EmailRegValidator.cpp -o ${OBJDIR}/EmailRegValidator.o

LengthValidator.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/LengthValidator.cpp -o ${OBJDIR}/LengthValidator.o

NonEmptyValidator.o: 
	${CXX} ${CXXFALGS} -c ${SRCDIR}/NonEmptyValidator.cpp -o ${OBJDIR}/NonEmptyValidator.o


${MAINOBJ}: EmailRegValidator.o BaseValidator.o LengthValidator.o NonEmptyValidator.o
	${CXX} ${CXXFALGS} -c ${SRCGEN} -o ${OBJDIR}/${MAINOBJ}

run:
	chmod 755 ${TARGET}
	./${TARGET}

clean:
	rm -rfv ${TARGET}
	rm -rfv *.o
	rm -rfv ${OBJDIR}/*