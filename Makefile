CC=gcc
CFLAGS=-Wall -std=gnu99

all:
	$(CC) $(CFLAGS) -o flowcontrol/bubble_sort flowcontrol/bubble_sort.c
	$(CC) $(CFLAGS) -o flowcontrol/counter2 flowcontrol/counter2.c
	$(CC) $(CFLAGS) -o flowcontrol/counter3 flowcontrol/counter3.c
	$(CC) $(CFLAGS) -o flowcontrol/fatorial flowcontrol/fatorial.c
	$(CC) $(CFLAGS) -o flowcontrol/max-turma flowcontrol/max-turma.c
	$(CC) $(CFLAGS) -o flowcontrol/ordena flowcontrol/ordena.c
	$(CC) $(CFLAGS) -o flowcontrol/primo flowcontrol/primo.c
	$(CC) $(CFLAGS) -o flowcontrol/question flowcontrol/question.c
	$(CC) $(CFLAGS) -o flowcontrol/question2 flowcontrol/question2.c

	$(CC) $(CFLAGS) -o helloworld/hello-turma helloworld/hello-turma.c
	$(CC) $(CFLAGS) -o helloworld/hello helloworld/hello.c
	$(CC) $(CFLAGS) -o helloworld/hello2 helloworld/hello2.c
	$(CC) $(CFLAGS) -o helloworld/hello3 helloworld/hello3.c
	$(CC) $(CFLAGS) -o helloworld/hello4 helloworld/hello4.c

	$(CC) $(CFLAGS) -o recursives/fatorial recursives/fatorial.c
	$(CC) $(CFLAGS) -o recursives/fibonacci recursives/fibonacci.c
	$(CC) $(CFLAGS) -o recursives/mdc recursives/mdc.c

	$(CC) $(CFLAGS) -o types/fahr2celsius types/fahr2celsius.c
	$(CC) $(CFLAGS) -o types/fahr2celsius_float types/fahr2celsius_float.c
	$(CC) $(CFLAGS) -o types/fahr2celsius_float_format types/fahr2celsius_float_format.c
	$(CC) $(CFLAGS) -o types/fib types/fib.c
	$(CC) $(CFLAGS) -o types/fibonacci types/fibonacci.c
	$(CC) $(CFLAGS) -o types/maxmin5 types/maxmin5.c
	$(CC) $(CFLAGS) -o types/mdc types/mdc.c

clean:
	rm flowcontrol/bubble_sort.c
	rm flowcontrol/counter2
	rm flowcontrol/counter3
	rm flowcontrol/fatorial
	rm flowcontrol/max-turma
	rm flowcontrol/ordena
	rm flowcontrol/primo
	rm flowcontrol/question
	rm flowcontrol/question2

	rm helloworld/hello-turma
	rm helloworld/hello
	rm helloworld/hello2
	rm helloworld/hello3
	rm helloworld/hello4

	rm recursives/fatorial
	rm recursives/fibonacci
	rm recursives/mdc

	rm types/fahr2celsius
	rm types/fahr2celsius_float
	rm types/fahr2celsius_float_format
	rm types/fib
	rm types/fibonacci
	rm types/maxmin5
	rm types/mdc