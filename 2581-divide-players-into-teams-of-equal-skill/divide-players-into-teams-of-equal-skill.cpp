// skill[] = length n

// skill[i] = i th players skill

// divide team n/2 of 2 players such that their total skill will be equal

// chemisty of a team is equal to the sum of multiplication of players
// skill in a team
// n = 3 = 3 teams of 2 players that

// 1 2 3 3 4 5
// [1,1,1,2,3,3,3,7,7,8,8,8,9,9]

// 3 3 4 6 9 14 18 18 19 19
// 1 2 2 3 4 6
// 2 2 4 5 9 10 12 12

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int ts = skill[0] + skill[skill.size()-1];
        int ft = 1;
        int en = skill.size()-2;

        long chemistry = skill[0] * skill[skill.size()-1];

        while(ft < en) {
            if((skill[ft]+skill[en])!=ts){
                return -1;
            }
            chemistry += skill[ft]*skill[en];
            ft++;
            en--;
        }
        return chemistry;
    }
};