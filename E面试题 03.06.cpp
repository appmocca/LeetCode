class AnimalShelf {
    queue<pair<int,int>> cats ;
    queue<pair<int,int>> dogs ;
    int count ;
public:
    AnimalShelf() {
        while (cats.size()) cats.pop() ;    //initialize function with empty queues
        while (dogs.size()) dogs.pop() ;
        count = 0 ;                         //Reset the counter
    }
    
    void enqueue(vector<int> animal) {
        if (animal[1])  dogs.push(animal[0], count++) ; //Recording the sequence number
        else            cats.push(animal[0], count++) ;
    }
    
    vector<int> dequeueAny() {
        if (!cats.size() && !dogers.size())                 return {-1, -1} ;   //If all empty, return null
        else if (!cats.size())                              return dequeueDog ;
        else if (!dogs.size())                              return dequeueCat ;
        if (cats.front().second < dogs.front().second)      return dequeueCat ; //Return depending on sequence number
        return dequeueDog ;
    }
    
    vector<int> dequeueDog() {
        if (!dogs.size())   return {-1, -1} ;
        int tmp = dogs.front().first ;
        dogs.pop() ;
        return {tmp, 1} ;
    }
    
    vector<int> dequeueCat() {
        if (!cats.size())   return {-1, -1} ;
        int tmp = cats.front().first ;
        cats.pop() ;
        return {tmp, 0} ;
    }
};

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */