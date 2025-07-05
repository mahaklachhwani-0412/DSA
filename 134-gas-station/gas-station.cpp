class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalStn = gas.size();
        int startingSTN = 0;
        int FuelInTank = 0;
        int TotalFuel = 0;

        for (int i = 0; i < totalStn; i++) {
            int netGain = gas[i] - cost[i];
            TotalFuel += netGain;
            FuelInTank += netGain;

            if (FuelInTank < 0) {
                startingSTN = i + 1;
                FuelInTank = 0;
            }
        }

        return (TotalFuel < 0) ? -1 : startingSTN;
    }
};
