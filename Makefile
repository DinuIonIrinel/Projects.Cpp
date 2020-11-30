
# compiler setup
CC=gcc
CFLAGS=-Wall -Wextra -std=c99

# define targets
TARGETS=star_dust

build: $(TARGETS)

star_dust: star_dust.c functions.h functions.c
	$(CC) $(CFLAGS) star_dust.c -o star_dust

pack:
	zip -FSr 315CA_DinuIonIrinel_Tema2.zip README Makefile *.c *.h

clean:
	rm -f $(TARGETS)

.PHONY: pack clean
