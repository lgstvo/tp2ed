CC=g++
CFLAGS=-Wall -Wextra -g
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=tp2.testresult


$(EXEC): main.cpp celula.o
	$(CC) $(CFLAGS) main.cpp celula.o -o $(EXEC)

celula.o: headers/celula.cpp
	$(CC) $(CFLAGS) -c headers/celula.cpp -o celula.o 


test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf bubble.o
	rm -rf celula.o
