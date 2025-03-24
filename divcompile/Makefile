# 변수 정의
CC = gcc
CFLAGS = -Wall -g
OBJS = main.o input.o average.o
TARGET = program

# 기본 목표: 실행 파일 만들기
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# 개별 파일 컴파일
main.o: main.c 
	$(CC) $(CFLAGS) -c main.c

input.o: input.c 
	$(CC) $(CFLAGS) -c input.c

average.o: average.c
	$(CC) $(CFLAGS) -c average.c

# clean 명령어로 빌드 결과 정리
clean:
	rm -f $(OBJS) $(TARGET)