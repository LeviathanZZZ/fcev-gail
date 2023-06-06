import numpy as np
a = np.loadtxt("a.txt",dtype=float)
a = a.reshape(len(a),1)
s_soc = np.loadtxt("s.txt",dtype=float)
s_soc = s_soc.reshape(len(s_soc),1)
s_p = np.loadtxt("s_p.txt",dtype=float)
s_p = s_p.reshape(len(s_p),1)
s = np.hstack((s_soc,s_p))
print(a)