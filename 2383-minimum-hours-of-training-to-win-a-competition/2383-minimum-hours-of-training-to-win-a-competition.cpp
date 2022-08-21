class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        //int total=accumulate(energy.begin(),energy.end(),0);
        int sum=0;
        int diff=0;
        for(int i=0;i<energy.size();i++){
            if( initialEnergy>energy[i]){
                 initialEnergy-=energy[i];
            }else{
                diff=energy[i] - initialEnergy;
                diff+=1;
                sum+=diff;
                initialEnergy=1;
            }
            if(initialExperience>experience[i]){
                initialExperience+=experience[i];
            }else{
                diff=experience[i]- initialExperience;
                diff+=1;
                cout<<diff<<" ";
                sum+=diff;
                initialExperience+=experience[i]+diff;
            }
        }
        return sum;
    }
};