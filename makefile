CC=-gcc
CFLAGS=-Wall -g

# Compilation

date.o: date.c
	$(CC) $(CFLAGS) -o date.o -c date.c

tests_unitaires_date.o: tests_untaires_date.c
	$(CC) -o tests_unitaires_date.o -c tests_unitaires_date.c $(CFLAGS)


# Edition de lien

tests_unitaires_date: tests_unitaires_date.o date.o
	$(CC) tests_unitaires_date.o date.o -o tests_unitaires_date


clean:
	rm -rf *.o *.exe *.out $(EXEC)