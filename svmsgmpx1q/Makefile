include ../Make.defines

PROGS =	client_main server_main

all:	${PROGS}

client_main:	client_main.o client.o mesg_recv.o mesg_send.o
		${CC} ${CFLAGS} -o $@ client_main.o client.o \
			mesg_recv.o mesg_send.o ${LIBS}

server_main:	server_main.o server.o mesg_recv.o mesg_send.o
		${CC} ${CFLAGS} -o $@ server_main.o server.o \
			mesg_recv.o mesg_send.o ${LIBS}

clean:
		rm -f ${PROGS} ${CLEANFILES}
		cd build && rm -f ${PROGS} ${CLEANFILES}
		
.phony: install
install:
		mv ${PROGS} ${CLEANFILES} build/
