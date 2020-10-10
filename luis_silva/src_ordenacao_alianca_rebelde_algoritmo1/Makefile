CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=tp2.testresult


$(EXEC): main.cpp celula.o
	$(CC) $(CFLAGS) main.cpp celula.o -o $(EXEC)

celula.o: headers/celula.cpp
	$(CC) $(CFLAGS) -c headers/celula.cpp -o celula.o 

heapsort.o: headers/heapsort.cpp
	$(CC) $(CFLAGS) -c headers/heapsort.cpp -o celula.o 


test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf heapsort.o
	rm -rf celula.o
