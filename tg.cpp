#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/wait.h>
int main(){int cilent[12]={0};
char buffer[1024];
struct sockaddr_in s;
struct sockaddr_in f;
int m=1;
int ml=4;
int mg,mh,newd,v1,c4;
int h=socket(AF_INET,SOCK_STREAM,0);
socklen_t s1=sizeof(s);
memset(&s,0,sizeof(s));
if(h<0){perror("socket  falid");
exit(-1);
}
s.sin_family=AF_INET;
s.sin_port=htons(8000);
s.sin_addr.s_addr=INADDR_ANY;
setsockopt(h,SOL_SOCKET,SO_REUSEADDR|SO_REUSEPORT,&m,sizeof(m));
if(bind(h,(struct sockaddr*)&s,sizeof(s))<0){perror("bind falied\n");
exit(-1);
}
if(listen(h,5)<0){perror("listen error\n");
exit(-1);
}
while(1){
//开始存放集合·
fd_set dd;;
struct timeval time;
time.tv_sec=5;
time.tv_usec=0;
FD_ZERO(&dd);
FD_SET(h,&dd);
//放数组
if((newd=accept(h,(struct sockaddr*)&f,&s1))>=0)
{for(int i=0;i<12;i++){
if(cilent[i]==0){cilent[i]=newd;
break;}
else{
continue;}
}
}
//集合
for(int i=0;i<12;i++)
{ int t=h;
for(int g=0;g<12;g++){if(cilent[g]!=0){
FD_SET(cilent[g],&dd);
if(cilent[g]>t){t=cilent[g];}
}}}
mg=select(t+1,&dd,NULL,NULL,&time);
if(mg<0){
perror("error select");
exit(-1);
}
if(mg==0){
continue;
}
//
for(int k=0;k<12;k++){
if(FD_ISSET(cilent[k],&dd)){
if((c4=read(cilent[k],buffer,sizeof(buffer)-1))>0){char buffer[c4];buffer[c4]='\0';char *hllo="hello";
int f1=read(cilent[k],buffer,strlen(k));
printf("%s",buffer);
send(cilent[k],hllo,strlen(hllo),0);
}
if((c4=read(cilent[k],buffer,sizeof(buffer)))==0){getpeername(cilent[k],(struct sockaddr*)&f,&s1);char *h3="end";send(cilent[k],h3,strlen(h3),0);
printf("%s %d",inet_ntoa(f.sin_addr),ntohs(f.sin_port));
int sf=cilent[k];
close(sf);
FD_CLR(cilent[k],&dd);
cilent[k]=0;
continue;
}
}
}
if(gets(stdin)==EOF){exit(0);
}
else{continue;
}
}
close(h);
return 0;}