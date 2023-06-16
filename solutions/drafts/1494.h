#include <queue>
#include <vector>

using ::std::vector, ::std::queue;

class Solution {
  public:
    int minNumberOfSemesters(int n, vector<vector<int>> &relations, int k) {
        if (n == 1) {
            return 1;
        }
        if (relations.empty()) {
            return (n + k - 1) / k;
        }
        int count = 0;
        vector<int> coursesin(n, 0);
        vector<vector<int>> coursesout(n);
        queue<int> ready_courses;
        int ok_courses = 0;
        for (const auto &it : relations) {
            coursesin[it[1] - 1]++;
            coursesout[it[0] - 1].emplace_back(it[1] - 1);
        }
        for (auto i = 0; i < coursesin.size(); ++i) {
            if (coursesin[i] == 0) {
                ready_courses.emplace(i);
            }
        }
        while (ok_courses != n) {
            auto ready_num = ready_courses.size();
            for (auto i = 0; (ok_courses != n) && (!ready_courses.empty()) &&
                             (i < k) && (i < ready_num);
                 ++i) {
                auto study_course = ready_courses.front();
                ready_courses.pop();
                auto &foo = coursesout[study_course];
                ok_courses++;
                if (!foo.empty()) {
                    for (auto j = 0; j < foo.size(); ++j) {
                        if ((--coursesin[foo[j]]) == 0) {
                            ready_courses.emplace(foo[j]);
                        }
                    }
                }
            }
            count++;
        }
        return count;
    }
};