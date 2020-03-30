#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 int array1[20];
 int test = 0;
void average_time(int [], int, int [], int);

struct Process
{
    int process_id;  
    int arrival_time;  
    int burst_time;   
    int priority; 
};
bool comparison(Process a, Process b)
{
    return !(a.priority > b.priority);
}

void priorityScheduling(Process proc[], int n)
{
	
	int temp = 0;
	for(int i = 0 ; i < n; i++)
	{
		temp = temp + proc[i].burst_time;
		
	}
	
	
	// Sort processes by priority8
    sort(proc, proc + n, comparison);
	
	
	//needed for level 2
	// process id's
    int processes[20];
 
    // Burst time of all processes
    int Burst_time[20];
	
	 
int main()
{
	int p1[6],a1[6],b1[6],pr[6];
	for (int i = 0;i<6;i++)
	{
	cout<<"\n\nEnter the process id for process "<<(i+1)<<": ";
	cin>>p1[i];
	cout<<"Enter the arrival time:";
	cin>>a1[i];
	cout<<"Enter the burst time:";
	cin>>b1[i];
	cout<<"Enter the priority: ";
	cin>>pr[i];
   }
    Process proc[] =   {{p1[0], a1[0], b1[0], pr[0]}, {p1[1], a1[1], b1[1], pr[1]}, {p1[2], a1[2], b1[2], pr[2]},
                      {p1[3], a1[3], b1[3], pr[3]}, {p1[4], a1[4], b1[4], pr[4]}, {p1[5], a1[5], b1[5], pr[5]}};
                      
    int n = sizeof proc / sizeof proc[0];
    system("cls");
	cout<<"\n------------------*** Process Table ***------------------"<<endl;
	// Display process table
    cout << "ProcessID "<< " Arrival time "<< " Burst time " << " Priority\n";
         
	for(int i = 0;i < n; i++)
	{
		cout << " " << proc[i].process_id << "\t\t" << proc[i].arrival_time <<"\t "
             << proc[i].burst_time <<"\t\t " << proc[i].priority <<endl;
	}

   
    
}
