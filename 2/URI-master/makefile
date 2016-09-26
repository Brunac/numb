CC=gcc
CFLAGS=-W -Wall -pedantic -std=c11
LFLAGS=-lm

SRC=$(wildcard *.c)
BIN=$(SRC:.c=)

.PHONY: all clear help

help:
	@echo "Sintaxe: make <opção>"
	@echo ""
	@echo "		Opções:"
	@echo "			help : mostra esta mensagem"
	@echo "			all : compila todos os programas da pasta"
	@echo "			clean : apaga todos os executáveis criados"
	@echo ""

all: $(BIN)

clear:
	@rm -f $(BIN)

%:%.c
	@echo -n "Gerando executável: $@"
	@$(CC) $< -o $@ $(CFLAGS) $(LFLAGS) && echo " [OK]"