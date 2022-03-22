def format_playlist(songs):
    artist = sorted([i[2] for i in songs])

    name = []

    for i, j in enumerate(songs):
        if j[2] == artist[i]:
            print(j)







if __name__ == '__main__':
    songs = [
        ('In Da Club', '3:13', '50 Cent'),
        ('Candy Shop', '3:45', '50 Cent'),
        ('One', '4:36', 'U2'),
        ('Wicked', '2:53', 'Future'),
        ('Cellular', '2:58', 'King Krule'),
        ('The Birthday Party', '4:45', 'The 1975'),
        ('In The Night Of Wilderness', '5:26', 'Blackmill'),
        ('Pull Up', '3:35', 'Playboi Carti'),
        ('Cudi Montage', '3:16', 'KIDS SEE GHOSTS'),
        ('What Up Gangsta', '2:58', '50 Cent')
    ]

    print(format_playlist(songs))
