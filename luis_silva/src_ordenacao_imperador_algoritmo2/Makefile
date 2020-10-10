CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
#TMPOUT=tp1.testresult


$(EXEC): main.cpp celula.o
	$(CC) $(CFLAGS) main.cpp celula.o -o $(EXEC)

celula.o: headers/celula.cpp
	$(CC) $(CFLAGS) -c headers/celula.cpp -o celula.o 

bubble.o: headers/bubble.cpp
	$(CC) $(CFLAGS) -c headers/bubble.cpp -o bubble.o 


#test: $(EXEC)
#	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf bubble.o
	rm -rf celula.o
