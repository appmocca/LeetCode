class ParkingSystem {
public:
    int b, s, m ;
    ParkingSystem(int big, int medium, int small) {
        b = big; m = medium; s = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1 : return b-- > 0 ;
            case 2 : return m-- > 0 ;
            case 3 : return s-- > 0 ;
            default : return false ;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */