# define respectively the compiler, the flags for debugging, the flags for releasing, and the flags for linking
CC = gcc
CDFLAGS = -g -Wall
CRFLAGS = -Wall -m64 -O3 -s


# define respectively the source files, and the object files (the object files being the source files where we replace .cpp with .o)
SRCS = main.c btree/btree.c queue/queue.c stack/stack.c list/list.c
OBJS = $(SRCS:.c=.o)

# define respectively the debug executable, and the release executable
MAIN = ./main.exe

all: debug
	$(MAIN)

debug: $(OBJS) 
		$(CC) $(CDFLAGS) -o $(MAIN) $(OBJS)

release: $(OBJS) 
		$(CC) $(CRFLAGS) -o $(MAIN) $(OBJS)

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .cpp file) and $@: the name of the target of the rule (a .o file) 
c.o:
		$(CC) $(CDFLAGS) -c $<  -o $@

clean:
		$(RM) *.o *~ $(MAIN)