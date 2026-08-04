class MyCalendar {
public:
    vector<pair<int, int>> store;

    MyCalendar() {

    }

    bool book(int startTime, int endTime) {

        for (auto interval : store) {
          if(interval.first<endTime && interval.second>startTime){
            return false;
          }

        }
        store.push_back({startTime, endTime});
        return true;
    }
};