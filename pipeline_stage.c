//Make stage function pipeline_stage.c 
pid_t make_stage(int m, int readfd, int **fds){
	int *actual_fds = *fds; 
	pipe(actual_fds);
	int pid=fork();
	if(pid==0){
	close(actual_fds[1]);
	make_stage(m, readfd,fds);	
	}else{
		close(actual_fds[0]);
		int k=filter(m, readfd, actual_fds[1]);
		close(actual_fds[1]);

	}
	return 0;
}
