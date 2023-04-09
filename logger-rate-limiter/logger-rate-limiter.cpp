class Logger {
public:
    
    map<string,int> theMap;
    
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (theMap.count(message)>0 && theMap[message]+10 > timestamp)
            return false;
        theMap[message] = timestamp;
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */