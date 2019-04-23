IDIR	= source/headers
CC	= gcc
CFLAGS	= -I$(IDIR) -O3 -Wall
LIBS 	=

ODIR	= source/obj
SDIR	= source

_DEPS 	= get_digit.h get_input.h
DEPS 	= $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ 	= get_digit.o get_input.o main.o
OBJ 	= $(patsubst %,$(ODIR)/%,$(_OBJ))

EXEC 	= digit

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(EXEC): $(OBJ)
	gcc $(CFLAGS) $(LIBS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(EXEC) $(ODIR)/*.o *~ core $(IDIR)/*~
