CC = gcc

default:
	$(CC) -o deersay main.c
	chmod +x deersay

install:
	cp deersay /usr/bin


clean:
	rm -f deersay
