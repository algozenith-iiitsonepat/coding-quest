class Solution(object):
    def minCost(self, colors, neededTime):
        newAr = [[neededTime[0]]]
        for i in range(1,len(colors)):
            if colors[i] == colors[i-1]:
                newAr[-1].append(neededTime[i])
            else:
                newAr.append([neededTime[i]])
        print(newAr)
        return sum(sum(i)-max(i) for i in newAr if len(i)>1)