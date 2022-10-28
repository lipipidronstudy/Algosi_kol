def binpo(mass, num):
    r = len(mass)
    l = -1
    while l + 1 < r:
        md = (r + l) // 2
        if num > mass[md]:
            l = md
        else:
            r = md
    if r >= len(mass) or mass[r] != num:
        return -1
    else:
        return r + 1

