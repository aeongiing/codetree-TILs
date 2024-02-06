#include <iostream>
#include <string>
using namespace std;

class Secret {
    public:
        string secret_code;
        int time;
        char meeting_point;

        Secret(string secret_code, char meeting_point, int time) {
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->time = time;
        }
};

int main() {
    string secret_code;
    int time;
    char meeting_point;
    cin >> secret_code >> meeting_point >> time;

    Secret secret1= Secret(secret_code, meeting_point, time);
    cin >> secret1.secret_code >> secret1.meeting_point >> secret1.time;
    cout << "secret code : " << secret1.secret_code << endl;
    cout << "meeting point : " << secret1.meeting_point << endl;
    cout << "time : " << secret1.time;
    return 0;
}