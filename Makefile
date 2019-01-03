

HEADER = inc
CC = gcc
SOURCE = src
TARGET = build

kompile :
	#${CC} ${SOURCE}/main.c -o ${TARGET}/kamu -I${HEADER}
	${CC} ${SOURCE}/linked_list.c -o ${TARGET}/kamu -I ${HEADER}

jalankan:
	./${TARGET}/kamu

semua: kompile jalankan
