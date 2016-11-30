COMPILER = g++

CPPUTEST_HOME = /home/junggu.lee/work/sandbox/tdd_for_embedded/cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = unittest 

$(OUTPUT): test/AllTests.c test/CalculatorTest.c src/Calculator.c src/Calculator.h
	$(COMPILER) -o $(OUTPUT) test/AllTests.c test/CalculatorTest.c src/Calculator.c -Isrc -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
