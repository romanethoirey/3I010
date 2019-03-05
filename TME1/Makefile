MAKE = make -r
MAINTAB_SRC = tab.o

all: maintab

%.o:%.c
	gcc -c $< -o $@


maintab: maintab.o tab.o
	gcc -o $@ maintab.o tab.o

clean:
	rm -f *.o
