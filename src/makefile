CC=gcc
CFLAGS=-Wall -g
EXEC=tests_unitaires_coordonnees


all: $(EXEC)


# Compilation

date.o: date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@
	
coordonnees.o: coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_date.o: tests_unitaires_date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_coordonnees.o: tests_unitaires_coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@


# Edition de lien

tests_unitaires_date: tests_unitaires_date.o date.o
	$(CC) $^ -o $@

tests_unitaires_coordonnees: tests_unitaires_coordonnees.o coordonnees.o
	$(CC) $^ -o $@


clean:
	rm -rf *.o

mrproper: clean
	rm -rf *.exe *.out $(EXEC)
