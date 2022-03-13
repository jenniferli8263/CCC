#TLE Last batch
n = int(input())
same = [input().split() for i in range(n)]

m = int(input())
diff = [input().split() for i in range(m)]

g = int(input())
arr = [input().split() for i in range(g)]

c = 0
vis=[]

for i in range(n):
  x1 = same[i][0]
  x2 = same[i][1]

  for j in range(g):
    tmp = arr[j]

    if x1 in tmp and x2 not in tmp:
      c += 1
      break
    
    elif x2 in tmp and x1 not in tmp:
      c += 1
      break

for i in range(m):
  y1 = diff[i][0]
  y2 = diff[i][1]

  for j in range(g):
    tmp = arr[j]

    if y1 in tmp and y2 in tmp:
      c += 1
      break


print(c)