include ../Make.defines

PROGS =	mainclient mainserver

all:	${PROGS}

mainclient:	mainclient.o
		${CC} ${CFLAGS} -o $@ mainclient.o ${LIBS}

mainserver:	mainserver.o
		${CC} ${CFLAGS} -o $@ mainserver.o ${LIBS}

clean:
		rm -f ${PROGS} ${CLEANFILES}
		cd build && rm -f ${PROGS} ${CLEANFILES}
install:
		mv ${PROGS} ${CLEANFILES} build/
