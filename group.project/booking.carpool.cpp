#include <iostream>
#include <vector>
#include <string> 
#include <map>

using namespace std;

class member {
    private:
        vector<int>booking; 
        int id;
        string name;
        string memberlocation;
    public:
        member(int id, string name,string memberlocation)
            :id (id), name (name), memberlocation(memberlocation){}
        vector <int> getbooking() const {
            return booking;
        }
    void addmember(int memberid){
        booking.push_back (memberid);
    }

};

class carpool {
    private:
        vector<int>passenger;
        vector<int>request;
        int carpoolid;
        string leavinglocation;
        string destination;
        string date;
        int seat;
        int driver;
    public:
        carpool(int carpoolid, string location, string destination, string date,int seat, int drive)
            :carpoolid(carpoolid), leavinglocation(location), destination(destination), date(date),
                seat(seat), driver(driver) {}
        void addpassenger(int passengerid){
            request.push_back(passengerid);
        }
        accept (int passengerid){
            for (int i = 0; i < request.size (); i++){
                if (request[i] == passengerid){
                    passenger.push_back(passengerid);
                    request.erase(request.begin() + i);
                    seat--;
                    break;
                }

            }
            if (seat == 0){
                reject();
            }
        }
        void reject(){
            request.clear();
        }
        vector <int> getrequest() const{
            return request;
        }
}; 

vector<carpool> search(vector <carpool>& carpools, string LocationMember, string leaving, string destination1, fstring date){
    vector <carpool> results;
    for (carpool& Carpools : carpools) {
        if (Carpools.leavinglocation == leaving && Carpools.destination == destination1 && Carpools.date == date && Carpools.seat > 0)
            if (Carpools.leavinglocation == LocationMember || Carpools.destination == LocationMember ) {
                results.push_back(Carpools);
            }
    }
    return results;
}

void book (vector<carpool>& carpools, vector <member>& members, int carpoolid, int passengerid){}
void cancelation(vector<carpool>& carpools, vector<member>& members, int memberid )


int main(){
vector<member>members;
vector<carpool>carpools;

    return 0;
}

