#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Task
{
public:
    string name ;
    int duration;
    int priority;
    bool scheduled;

    Task(string n , int d , int p):
        name(n), duration(d), priority(p), scheduled(false){}

};

class Task_Scheduler
{

private:
    int total_time;
    vector<Task> tasks;
public:
    Task_Scheduler(int time)
    {
        total_time=time;
    }
    void add_task(string name , int duration , int priority)
    {
        tasks.push_back(Task(name, duration, priority));
    }

    void schedule()
    {
        if(tasks.empty())
        {
            cout<<"No task available to schedule \n";
            return;
        }


        sort(tasks.begin(),tasks.end(),[](const Task& a , const Task& b)
        {

            if(a.priority!=b.priority)
                return a.priority>b.priority;
            return a.duration<b.duration;
        });
        int remaining_time=total_time;

        for(auto& task : tasks)
        {
            if(task.duration<=remaining_time)
              {
            task.scheduled=true;
            remaining_time=remaining_time-task.duration;
              }

        }


    }
    void printSchedule()
    {
        cout<<"\nSchedule summary:\n";
        cout<<"Total time available :" <<total_time<<" Minutes\n";
        cout<<" Task      " ;
        cout<<"Priority    ";
        cout<<"duration    ";
        cout<<"Status    "<<"\n";
        cout<<string(50,'-')<<endl;

        int scheduled_time=0;
        int scheduled_tasks=0;
        for(auto& task : tasks)
        {
            cout<<task.name <<"        ";
            cout<<task.priority<<"            ";
            cout<<task.duration<<"           ";
            cout<<(task.scheduled? "Scheduled" : "Not scheduled")<<" ";
            cout<<endl;

            if(task.scheduled)
            {

                scheduled_time=scheduled_time+task.duration;
                scheduled_tasks++;
            }
        }


        cout<<"\n Summary \n" ;
        cout<<"Task Scheduled : " <<scheduled_tasks <<"/" <<tasks.size() <<endl;
        cout<<"Total time used: " <<scheduled_time<<" minutes \n";
        cout<<"Total Time remaining: "  << total_time-scheduled_time<<" minutes\n" <<endl;

    }
} ;


int main()
{
int time,n,d,p;
string name;
cout<<"                                      WELCOME TO TASK MANAGEMENT SYSTEM " <<endl << endl;
cout<<"Enter the total time available in minutes : ";
cin>>time;
Task_Scheduler scheduler(time);
cout<<endl;
cout<<"Enter the number of tasks : "  ;
cin>>n;
cout<<endl;
for(int i=0;i<n;i++)
{ cout<<"For task #"<<i+1<<endl;
    cout<<"Enter task name : " ;
    cin>>name;
    cout<<endl;
    cout<<"Enter the duration of the task in minutes :";
    cin>>d;
    cout<<endl;
    cout<<"Enter the priority ( 1 :low , 2: moderate , 3: highest) : ";
    cin>>p;
    cout<<endl;
    scheduler.add_task(name,d,p);
}
    scheduler.schedule();
    scheduler.printSchedule();
    return 0;
}
