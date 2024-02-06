#include <iostream>
#include <string>
using namespace std;

class Agent{
    public:
        string codename;
        int score;
        Agent(string codename=" ", int score=100){
            this->codename=codename;
            this->score=score;
        }
};



int main() {
    
    Agent agent_min=Agent(" ", 100);
    for(int i = 0; i < 5; i++) {
        Agent agents[5];
        string codename;
        int score;
        cin >> codename >> score;
        agents[i]=Agent(codename, score);
        if(agents[i].score<=agent_min.score){
            agent_min=agents[i];
            
        }

    }
    cout << agent_min.codename << " " << agent_min.score << endl;
    return 0;
}