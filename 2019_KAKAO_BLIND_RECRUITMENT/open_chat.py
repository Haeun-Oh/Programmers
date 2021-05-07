def solution(record):
    logs = [r.split(' ') for r in record]
    udb = {log[1]:log[2] for log in logs if len(log)==3}
    return [udb[log[1]]+'님이 들어왔습니다.' if log[0] == 'Enter' else  udb[log[1]]+'님이 나갔습니다.' for log in logs if log[0] !='Change']
