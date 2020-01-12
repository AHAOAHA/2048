2048:src/2048.c src/main.c
	gcc $^ -o $@ -O3
.PHONY:clean
clean:
	rm -f 2048
