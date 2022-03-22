# https://www.codewars.com/kata/555a03f259e2d1788c000077/train/python


def protein(rna):
    amino_acid = {
        "UUC":"F", "UUU":"F",
        "UUA":"L", "UUG":"L", "CUU":"L", "CUC":"L","CUA":"L","CUG":"L",
        "AUU":"I", "AUC":"I", "AUA":"I",
        "AUG":"M",
        "GUU":"V", "GUC":"V", "GUA":"V", "GUG":"V",
        "UCU":"S", "UCC":"S", "UCA":"S", "UCG":"S", "AGU":"S", "AGC":"S",
        "CCU":"P", "CCC":"P", "CCA":"P", "CCG":"P",
        "ACU":"T", "ACC":"T", "ACA":"T", "ACG":"T",
        "GCU":"A", "GCC":"A", "GCA":"A", "GCG":"A",
        "UAU":"Y", "UAC":"Y",
        "CAU":"H", "CAC":"H",
        "CAA":"Q", "CAG":"Q",
        "AAU":"N", "AAC":"N",
        "AAA":"K", "AAG":"K",
        "GAU":"D", "GAC":"D",
        "GAA":"E", "GAG":"E",
        "UGU":"C", "UGC":"C",
        "UGG":"W",
        "CGU":"R", "CGC":"R", "CGA":"R", "CGG":"R", "AGA":"R", "AGG":"R",
        "GGU":"G",  "GGC":"G", "GGA":"G", "GGG":"G",
        "UAA":"Stop", "UGA":"Stop", "UAG":"Stop"
    }

    return "".join([amino_acid.get(rna[i:i+3]) if amino_acid.get(rna[i:i+3]) != "Stop" else " " for i in range(0, len(rna) - 1, 3)]).strip()


if __name__ == "__main__":
    rna = input()
    print(protein(rna))
