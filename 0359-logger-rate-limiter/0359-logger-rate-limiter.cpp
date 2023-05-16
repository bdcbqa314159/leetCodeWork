class Logger {
public:
    
    map<string, int>m;
    
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (m.count(message)>0 && m[message]+10>timestamp)
            return false;
        m[message] = timestamp;
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */