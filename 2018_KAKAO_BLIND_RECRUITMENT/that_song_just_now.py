def solution(m, musicinfos):
    m = m.replace('C#','c').replace('D#','d').replace('E#','e').replace('F#','f').replace('G#','g').replace('A#','a')
    music_dic = dict()
    answer = ["",""]
    for information in musicinfos:
        start, end, name, music = information.split(',')
        music = music.replace('C#','c').replace('D#','d').replace('E#','e').replace('F#','f').replace('G#','g').replace('A#','a')
        start =[int(time) for time in start.split(':')]
        end = [int(time) for time in end.split(':')]
        all_time = (end[0]-start[0])*60 + (end[1]-start[1])
        music = music*(all_time//len(music)) + music[0:all_time%len(music)]
        music_dic[name] = music
    for key,value in music_dic.items():
        if m in value:
            if len(answer[1]) < len(value): 
                answer[0] = key
                answer[1] = value
    return "(None)" if len(answer[0]) == 0 else answer[0]
