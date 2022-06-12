CC=gcc
CFLAGS=-O2
usbwriter: main.c
	$(CC) -o usbwriter main.c $(CFLAGS) 
	sudo cp usbwriter /bin/
