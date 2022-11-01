def insort(array):
    for i in range(1, len(array)):
        t = array[i]
        j = i - 1
        while (j >= 0 and t < array[j]):
            array[j + 1] = array[j]
            j = j - 1
        array[j + 1] = t
    return array