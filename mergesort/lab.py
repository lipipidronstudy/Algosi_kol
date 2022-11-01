def mergesort(a):
    if len(a) < 2:
        return a
    q = []
    mid = int(len(a) / 2)
    i = 0
    j = 0
    left = mergesort(a[:mid])
    right = mergesort(a[mid:])
    while i < len(left) and j < len(right):
        if left[i] > right[j]:
            q.append(right[j])
            j += 1
        else:
            q.append(left[i])
            i += 1
    q += left[i:]
    q += right[j:]
    return q
