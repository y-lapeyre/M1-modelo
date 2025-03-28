import matplotlib.pyplot as plt
import numpy as np

# Lecture des fichiers de données
rk1_data = np.loadtxt('rk1.txt', skiprows=1)
rk4_data = np.loadtxt('rk4.txt', skiprows=1)
analytique_data = np.loadtxt('theorie.txt', skiprows=1)

# Tracé des graphiques
plt.plot(rk1_data[:, 0], rk1_data[:, 1], label='RK1', c='red')
plt.plot(rk4_data[:, 0], rk4_data[:, 1], label='RK4', c='blue')
plt.plot(analytique_data[:, 0], analytique_data[:, 1], label='Analytique', c='green')

# Configuration du graphique
plt.xlabel('t')
plt.ylabel('y')
plt.title('Résultats de la résolution numérique')
plt.legend()

# Affichage du graphique
plt.show()