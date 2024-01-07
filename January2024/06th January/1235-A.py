class Solution(object):
    def jobScheduling(self, startTime, endTime, profit):
        """
        :type startTime: List[int]
        :type endTime: List[int]
        :type profit: List[int]
        :rtype: int
        """
        n = len(startTime)
        events = []
        for i in range(n):
            events.extend(((startTime[i], 1, i), (endTime[i], 0, i)))
        events.sort()

        maxProfit = [0]*n
        previousMax = 0

        for _, eventType, index in events:
            if eventType == 1:
                maxProfit[index] = previousMax + profit[index]
            else:
                previousMax = max(maxProfit[index], previousMax)
        return previousMax