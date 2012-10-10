INC_DIR=../src
SRC=test.c ../src/list.c
all:
	@gcc ${SRC} -o test -g -I${INC_DIR}

test:all
	@touch test.log
	@env MALLOC_TRACE=test.log ./test
	@echo "memory leaks check result:"
	@mtrace test test.log
clean:
	@rm test test.log
