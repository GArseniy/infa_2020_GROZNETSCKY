#include <vector>


std::vector<int> findArrayQuadruplet(std::vector<int> &nums, int N){
    for (int i=0; i < nums.size(); ++i)
        for (int j=i; j < nums.size(); ++j)
            for (int k=j; k < nums.size(); ++k)
                for (int z=k; z < nums.size(); ++z)
                    if (nums[i] + nums[j] + nums[k] + nums[z] == N){
                        int myints[] = {nums[i], nums[j], nums[k], nums[z]};
                        std::vector<int> ret (myints, myints + sizeof(myints) / sizeof(int) );
                        return ret;
                    }
    std::vector<int> ret;
    return ret;
}
