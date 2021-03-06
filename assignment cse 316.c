
Ques. 5. CPU schedules N processes which arrive at different time intervals and each process is allocated the CPU for a specific user input time unit, processes are scheduled using a preemptive round robin scheduling algorithm. Each process must be assigned a numerical priority, with a higher number indicating a higher relative priority. In addition to the processes one task has priority 0. The length of a time quantum is T units, where T is the custom time considered as time quantum for processing. If a process is preempted by a higher-priority process, the preempted process is placed at the end of the queue. Design a scheduler so that the task with priority 0 does not starve for resources and gets the CPU at some time unit to execute. Also compute waiting time, turn around.


#include<stdio.h>
#include<conio.h>
void main()
{
  char p[10][5],temp[5];
  int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
  float avgwt;
 printf("enter no of processes:");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("enter process%d name:",i+1);
 scanf("%s",&p[i]);
  printf("enter process time:");
 scanf("%d",&pt[i]);
  printf("enter priority:");
  scanf("%d",&pr[i]);
  }
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
   if(pr[i]>pr[j])
 {
   temp1=pr[i];
 pr[i]=pr[j];
  pr[j]=temp1;
  temp1=pt[i];
  pt[i]=pt[j];
  pt[j]=temp1;
 strcpy(temp,p[i]);
 strcpy(p[i],p[j]);
  strcpy(p[j],temp);
  }
  }
  }
 wt[0]=0;
  for(i=1;i<n;i++)
  {
   wt[i]=wt[i-1]+et[i-1];
   totwt=totwt+wt[i];
   }   
avgwt=(float)totwt/n;   
printf("p_name\t p_time\t priority\t w_time\n");
for(i=0;i<n;i++)  
{
   printf(" %s\t %d\t %d\t %d\n" ,p[i],pt[i],pr[i],wt[i]);
   }
  printf("total waiting time=%d\n avg waiting time=%f",tot,avg);
  getch();
   }



OUTPUT:
enter no of processes: 5
enter process1 name: aaa
enter process time: 4
enter priority:5
enter process2 name: bbb
enter process time: 3
enter priority:4
enter process3 name: ccc
enter process time: 2
enter priority:3
enter process4 name: ddd
enter process time: 5
enter priority:2
enter process5 name: eee
enter process time: 1
enter priority:1
p_name P_time priority w_time
eee 1 1 0
ddd 5 2 1
ccc 2 3 6
bbb 3 4 8
aaa 4 5 11
total waiting time=26
avg waiting time=5.20
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52