# https://www.codewars.com/kata/56662e268c0797cece0000bb/train/python


def sum_fibs(n):
    f_term = 1
    s_term = 1
    n_term = 0

    total = 0
    
    for i in range(n - 1):
        if n_term % 2 == 0:
            total += n_term
        
        n_term = f_term + s_term
        f_term = s_term
        s_term = n_term

    return total



if __name__ == "__main__":
    n = [5, 9, 10, 11]
    #print(sum_fibs(n[0]))
    for i in range(len(n)):
        print(sum_fibs(n[i]))
