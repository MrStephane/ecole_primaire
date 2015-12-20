CC=-gcc
CFLAGS=-Wall -g
EXEC=tests_untaires_date


all: $(EXEC)


# Compilation

date.o: date.c
	$(CC) $(CFLAGS) -c $< -o $@ 

tests_unitaires_date.o: tests_untaires_date.c
	$(CC) $(CFLAGS) -c $< -o $@


# Edition de lien

tests_unitaires_date: tests_unitaires_date.o date.o
	$(CC) $^ -o ^@


clean:
	rm -rf *.o

mrproper: clean
	rm -rf *.exe *.out $(EXEC)