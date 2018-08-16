#! Makefile

CC=g++
CCFLAGS=
LDFLAGS=
NAME=testent
DEPS=entity.h event.h Vector.h

MAIN=testent.cpp
CPPS=entity.cpp Vector.cpp $(MAIN)

OBJS=$(CPPS:%.cpp=%.o)


all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJS):$(CPPS) $(DEPS)
	$(CC) $(CCFLAGS) -c $(CPPS)

clean:
	rm -f *.o


