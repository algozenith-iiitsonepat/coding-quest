class Solution(object):
    def findAllPeople(self, n, meetings, firstPerson):
        """
        :type n: int
        :type meetings: List[List[int]]
        :type firstPerson: int
        :rtype: List[int]
        """
        known = set([0, firstPerson])
        
        sort_meeting = []
        meetings.sort(key=lambda x:x[2])

        seen_time = set()
        
        for meeting in meetings:
            if meeting[2] not in seen_time:
                seen_time.add(meeting[2])
                sort_meeting.append([])
            sort_meeting[-1].append((meeting[0], meeting[1]))

        for meeting_group in sort_meeting:
            people_know_secret = set()
            graph = defaultdict(list)
            
            for p1, p2 in meeting_group:
                graph[p1].append(p2)
                graph[p2].append(p1)
                if p1 in known:
                    people_know_secret.add(p1)
                if p2 in known:
                    people_know_secret.add(p2)
                    
            queue = deque((people_know_secret))
        
            while queue:
                curr = queue.popleft()
                known.add(curr)
                for neighbor in graph[curr]:
                    if neighbor not in known:
                        known.add(neighbor)
                        queue.append(neighbor)

        return list(known)
