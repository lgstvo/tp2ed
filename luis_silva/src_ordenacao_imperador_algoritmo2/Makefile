CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
##TMPOUT=tp1.testresult


$(EXEC): main.cpp celula.o insertion.o
	$(CC) $(CFLAGS) main.cpp celula.o insertion.o -o $(EXEC)



#test: $(EXEC)
#	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf insertion.o
	rm -rf celula.o