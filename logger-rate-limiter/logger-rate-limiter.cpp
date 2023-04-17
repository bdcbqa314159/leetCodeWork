class Logger {
public:
    
    map<string, int> map_;
    
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (map_.count(message)>0 && map_[message]+10>timestamp)
            return false;
        map_[message] = timestamp;
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */