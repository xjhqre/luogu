#include <algorithm>
#include <iostream>
#include <map>
#include <cstdio>
#include <string>
#include <string.h>
#include <cctype>
#include <math.h>
#include <vector>
using namespace std;

struct stuDent
{
    string name;
    int exam_score;
    int Comment_score;
    string cadre, west;
    int scholarship;
    int paper; // 论文
    /* data */
}stu[101];

int cmp(stuDent a, stuDent b){
    if (a.scholarship != b.scholarship){
        return a.scholarship > b.scholarship;
    }
}


int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].exam_score >> stu[i].Comment_score >> stu[i].cadre >> stu[i].west >> stu[i].paper;
        // 院士奖学金
        if (stu[i].exam_score > 80 && stu[i].paper >= 1){
            stu[i].scholarship += 8000;
            sum += 8000;
        }
        // 五四奖学金
        if (stu[i].exam_score > 85 && stu[i].Comment_score > 80){
            stu[i].scholarship += 4000;
            sum += 4000;
        }
        // 成绩优秀奖
        if (stu[i].exam_score > 90){
            stu[i].scholarship += 2000;
            sum += 2000;
        }
        // 西部奖学金
        if (stu[i].exam_score > 85 && stu[i].west == "Y"){
            stu[i].scholarship += 1000;
            sum += 1000;
        }
        // 班级贡献奖
        if (stu[i].Comment_score > 80 && stu[i].cadre == "Y"){
            stu[i].scholarship += 850;
            sum += 850;
        }
    }
    sort(stu, stu + n, cmp); // 根据奖学金数量降序排序
    cout << stu[0].name << endl;
    cout << stu[0].scholarship << endl;
    cout << sum;

    system("pause");
    return 0;
}