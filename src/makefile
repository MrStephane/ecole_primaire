CC=gcc
CFLAGS=-Wall -g
EXEC=tests_unitaires_eleve


all: $(EXEC)


# Compilation

date.o: date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@

coordonnees.o: coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@

personne.o: personne.c personne.h coordonnees.h date.h
	$(CC) $(CFLAGS) -c $< -o $@

eleve.o: eleve.c eleve.h personne.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_date.o: tests_unitaires_date.c date.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_coordonnees.o: tests_unitaires_coordonnees.c coordonnees.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_personne.o: tests_unitaires_personne.c personne.h
	$(CC) $(CFLAGS) -c $< -o $@

tests_unitaires_eleve.o: tests_unitaires_eleve.c eleve.h
	$(CC) $(CFLAGS) -c $< -o $@


# Edition de lien

tests_unitaires_date: date.o tests_unitaires_date.o
	$(CC) $^ -o $@

tests_unitaires_coordonnees: coordonnees.o tests_unitaires_coordonnees.o
	$(CC) $^ -o $@

tests_unitaires_personne: coordonnees.o date.o personne.o tests_unitaires_personne.o
	$(CC) $^ -o $@

tests_unitaires_eleve: coordonnees.o date.o personne.o eleve.o tests_unitaires_eleve.o
	$(CC) $^ -o $@


clean:
	rm -rf *.o

mrproper: clean
	rm -rf *.exe *.out $(EXEC)
