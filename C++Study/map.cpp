#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,char> stud_sex_map;
    int size = stud_sex_map.size();
    bool is_empty = stud_sex_map.empty();
    stud_sex_map[10010] = 'm';
    stud_sex_map[10011] = 'f';
    stud_sex_map[10012] = 'f';
    int count = stud_sex_map.count(1000);
    /**
     * 获取元素
     */
    char ch = stud_sex_map[10010];
    /**
     * 删除元素
     */
     stud_sex_map.erase(10010);
     stud_sex_map.erase(stud_sex_map.begin());
     /**
      * 元素遍历
      */
      for(map<int,char>::iterator itor=stud_sex_map.begin();itor!=stud_sex_map.end();++itor){
          int key = itor->first;
          int value = itor->second;
          cout<<key<<" "<<value<<endl;
      }

    return 0;
}
