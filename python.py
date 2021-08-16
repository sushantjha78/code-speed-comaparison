import time
n = int(10e8)


def for_time():
    start = time.time()
    for i in range(n):
        pass
    end = time.time()
    return end - start


def while_time():
    i = 0
    start = time.time()
    while i < n:
        i += 1
    end = time.time()
    return end - start


def if_true_time():
    i = 0
    start = time.time()
    while i < n:
        i += 1
        if i > 0:
            pass
    end = time.time()
    return end - start


def if_5_time():
    i = 0
    start = time.time()
    while i < n:
        i += 1
        if i > 0:
            pass
        if i > 0:
            pass
        if i > 0:
            pass
        if i > 0:
            pass
        if i > 0:
            pass
    end = time.time()
    return end - start


def __main__():
    print("for_time:", for_time())
    print("while_time:", while_time())
    print("if_true_time:", if_true_time()-while_time())
    print("if_5_time:", if_5_time()-while_time())


if __name__ == "__main__":
    __main__()
