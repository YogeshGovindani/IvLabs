text = "X-DSPAM-Confidence:    0.8475";
pos = text.find(':')
piece = text[pos+1:]
value = float(piece)
print(value)
