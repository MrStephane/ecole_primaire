CC=gcc
CFLAGS=-Wall -g
EXEC=tests_unitaires_personne


all: $(EXEC)


# Compilation

date.o: date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@

coordonnees.o: coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@

personne.o: personne.c personne.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_date.o: tests_unitaires_date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_coordonnees.o: tests_unitaires_coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_personne.o: tests_unitaires_personne.c personne.h date.h coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@


# Edition de lien

tests_unitaires_date: tests_unitaires_date.o date.o
	$(CC) $^ -o $@

tests_unitaires_coordonnees: tests_unitaires_coordonnees.o coordonnees.o
	$(CC) $^ -o $@

tests_unitaires_personne: tests_unitaires_personne.o personne.o date.o coordonnees.o
	$(CC) $^ -o $@


clean:
	rm -rf *.o

mrproper: clean
	rm -rf *.exe *.out $(EXEC)
