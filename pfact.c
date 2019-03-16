#include<stdio.h> 
#include<stdlib.h> 
#include <stdbool.h>
#include<fcntl.h>
#include<unistd.h> 
#include<sys/types.h> 
#include<string.h> 
#include<sys/wait.h> 
#include <math.h>
#include "filter.c"
#include "pipeline_stage.c"

int main(int argc, char* argv[]){
	
	if(argc>2 || argc<2){
		//Exit with the ERROR mentioned
		fprintf(stderr, "Usage:\n\tpfact:Invalid number of arguments n\n");
		exit(1);
	}
	int fd=open("Source.txt",O_CREAT|O_WRONLY|O_RDONLY);
	int *fds[2];
	
	int n=atoi(argv[1]);
	int values[n];
	if(n<0){
		fprintf(stderr, "Usage:\n\tpfact: Invalid input for n n\n");
		exit(1);
          }
	int  m, i;
	int factor1,factor2,count=0;
	factor1=-1;factor2=-1;

	
	for(int i=2; i<=n; i++){
		write(fd, &i, sizeof(int));
		 values[i]=i;
	}
		i=0;
		bool br=false;
		while(/*read(fd,&m,sizeof(int)*/i*i<=n){
			m=values[i];
			if(m!=0){
				if(n%m==0){
				if(factor1==-1){
				factor1=m;
				}else if(factor1!=-1 && factor2==-1 && m*m>=n){
				if((n/factor1)%factor1 !=0){

				printf("%d Is the product of two factors\n ",n);
				printf("Number of filters %d\n",count);
				br=true;
				}else{
				factor2=m;
				}

				}
								
				}
			/*if(m*m>=n){
			printf("Number of filters %d\n",count);
			br=true;
			}else */if(factor1!=-1 && factor2!=-1 && factor1*factor1<n && factor2*factor2<n){
//Two	factors found
			printf("%d Is not the product of two primes \n",n);
			printf("Number of filters %d\n",count);
			br=true;
			}
			else{
			//make_stage(m,fd,fds);	
			}

			for(int j=i;j<n;j++){
				if(values[j]%m==0){
				values[j]=0;	
			}//End if
			}//End for
			if(br==true){
			break;
			}
		count++;
			}//End first if
			i++;
		}//End while
if(factor1==-1 && factor2==-1){
printf("%d Is prime \n",n);
printf("Number of filters %d\n",count);
}else if(factor1!=-1 && factor2==-1){
printf("%d Is the product of two factors\n ",n);
printf("Number of filters %d\n",count);
}
	
	

	
}





