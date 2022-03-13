#2010 J5
s = input().split(' ')
end = input().split(' ')
s = list(map(int,s))
end = list(map(int,end))

queue = [s]
visited = []
c = 0
dist = [0]
final = []
def getcoor(next):
  t = []
  a = [-2,-1,1,2]
  for i in a:
    if next[0] + i <= 8 and next[0]+i>0:
      for j in a:
        if j != i and j != -i and next[1]+j<=8 and next[1]+j >0:
          t.append([next[0]+i,next[1]+j])
  return t

while queue:
  curr = queue.pop(0)
  tmp = getcoor(curr)
  visited.append(curr)
  if s == end:
    print(0)
    break
  if end in tmp:
    visited.append(end)
    a = visited.index(curr)
    print(dist[a]+1)
    break
  else:
    for i in tmp:
      if i not in visited:
        queue.append(i)
        a = visited.index(curr)
        dist.append(dist[a]+1)
        


