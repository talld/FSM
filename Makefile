CFLAGS  = 
LDFLAGS =

src = \
      main.c \
      a1.c    \
      a2.c    \

obj = $(src:.c=.o)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

test: $(obj)
	echo $(src) $(obj)

clean: 
	rm -f *.o *.out *.so *.a *.gch
