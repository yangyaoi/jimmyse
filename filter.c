//Filter function
int filter(int m, int readfd, int writefd) {
	if (readfd == -1 || writefd == -1) {
		fprintf(stderr, "filter: Invalid file descriptor\n");
		return 1;
	}else{
	int i;
	while (read(readfd, &i, sizeof(int))) {
	 if(i%m!=0){
	write(writefd, &i, sizeof(int));

	 }
	}
	return 0;
	}

}

