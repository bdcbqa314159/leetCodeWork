class ParkingSystem {
public:
    
    int big, medium, small;
    
    ParkingSystem(int big, int medium, int small):big(big), medium(medium), small(small) {
        
    }
    
    bool addCar(int carType) {
        if (carType == 1){
            if (big == 0) return false;
            else{
                big--;
                return true;
            }
        }
        
        else if (carType == 2){
            if (medium == 0) return false;
            else{
                medium--;
                return true;
            }
        }
        
        else {
            if (small == 0) return false;
            else{
                small--;
                return true;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */