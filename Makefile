
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := onevar_result.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

demo: demo.o $(OBJS)

onevar_result.o: onevar_result.c onevar_result.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

showcase: demo
	./$<

clean:
	rm -f $(OBJS) onevar_result.o test.o test demo.o demo

.PHONY: validate showcase clean
