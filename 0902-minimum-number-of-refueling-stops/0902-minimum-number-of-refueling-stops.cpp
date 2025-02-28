class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int minStop = 0;
        int currFuel = startFuel;
        priority_queue<int>maxHeap;

        for( auto station : stations){
        int position = station[0];
        int fuel = station[1];
        
        while(currFuel < position){
            if(maxHeap.empty()){
                return -1;
            }
            currFuel += maxHeap.top();
            maxHeap.pop();
            minStop++;
        }
        maxHeap.push(fuel);
        }
        while(currFuel < target){
            if(maxHeap.empty()){
                return -1;
            }
            currFuel += maxHeap.top();
            maxHeap.pop();
            minStop++;
        }
        
        return minStop;
    }
};