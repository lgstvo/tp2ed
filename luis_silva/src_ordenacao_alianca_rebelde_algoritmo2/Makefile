CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=tp2.testresult


$(EXEC): main.cpp celula.o mergesort.o
	$(CC) $(CFLAGS) main.cpp celula.o -o $(EXEC)

celula.o: headers/celula.cpp
	$(CC) $(CFLAGS) -c headers/celula.cpp -o celula.o 

mergesort.o: headers/mergesort.cpp
	$(CC) $(CFLAGS) -c headers/mergesort.cpp -o mergesort.o


test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf mergesort.o
	rm -rf celula.o
