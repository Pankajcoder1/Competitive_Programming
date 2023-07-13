/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

#include <vector>
#include <queue>

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        // Create adjacency list to represent the course dependencies
        vector<vector<int>> graph(numCourses);
        vector<int> inDegree(numCourses, 0);

        // Build the graph and calculate in-degrees of each course
        for (const auto &prerequisite : prerequisites)
        {
            int course = prerequisite[0];
            int prerequisiteCourse = prerequisite[1];
            graph[prerequisiteCourse].push_back(course);
            inDegree[course]++;
        }

        // Perform a cycle detection using BFS
        queue<int> q;

        // Add all courses with in-degree 0 to the queue
        for (int i = 0; i < numCourses; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        int courseCount = 0;

        while (!q.empty())
        {
            int currentCourse = q.front();
            q.pop();
            courseCount++;

            // Traverse the dependent courses and reduce their in-degrees
            for (int dependentCourse : graph[currentCourse])
            {
                inDegree[dependentCourse]--;

                // If the in-degree becomes 0, add it to the queue
                if (inDegree[dependentCourse] == 0)
                {
                    q.push(dependentCourse);
                }
            }
        }

        return courseCount == numCourses;
    }
};
