all: complex

complex: complex.o bubbleSort.o
	g++ complex.o bubbleSort.o -o complex
           
complex.o: complex.cpp
	g++ -c complex.cpp -o complex.o
          
bubbleSort.o: bubbleSort.cpp
	g++ -c bubbleSort.cpp -o bubbleSort.o
	 
clean:
	rm *.o complex
