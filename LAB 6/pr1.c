int i, j, k;


//we create the child process, i=0 is the child
i = fork();

//we create another child process for j, j=0 and we also have its parent, PID, only the 
//parent can execute the if
if ((j = fork())) {

//another 2 processes created here, beacuse each parent makes 1, so we have 6 in total now
    k = fork();

}

printf("%d %d %d %d %d", i, j, k, getpid(), getppid());
