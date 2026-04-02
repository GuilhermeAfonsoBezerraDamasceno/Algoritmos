compilar: main.o func.o
	g++ -o main main.o func.o

main.o: src/main.cpp include/func.h
	g++ -c src/main.cpp

func.o: src/func.cpp include/func.h
	g++ -c src/func.cpp

clean:
	rm -f main *.o 
exec: 
	@./main