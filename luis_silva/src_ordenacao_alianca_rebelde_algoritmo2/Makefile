CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
##TMPOUT=tp1.testresult


$(EXEC): main.cpp civilizacao.o insertion.o
	$(CC) $(CFLAGS) main.cpp civilizacao.o insertion.o -o $(EXEC)

civilizacao.o: headers/civilizacao.cpp
	$(CC) $(CFLAGS) -c headers/civilizacao.cpp -o fila.o

insertion.o: headers/insertion.cpp
	$(CC) $(CFLAGS) -c headers/insertion.cpp -o pilha.o

#test: $(EXEC)
#	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf insertion.o
	rm -rf civilizacao.o