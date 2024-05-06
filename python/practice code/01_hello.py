import re

delimiter_pattern = r'[\s:();,]'
delimiter_pattern2=r'[{}]'
n = int(input())
list2 = []

for _ in range(n):
    string1 = input()
    result1 = re.split(delimiter_pattern2, string1)
    
print(result1)
