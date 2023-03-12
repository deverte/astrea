import nlte


temperature = 1.0e5
delta_time = 60.0
electron_number_density = 1.0e4

population_nlte_1 = [0.0 for _ in range(52)]
population_nlte_1[0] = 1.0


population_lte = nlte.oxygen_lte_population(temperature)


population_nlte_2 = nlte.oxygen_nlte_population(
  population_nlte_1,
  delta_time,
  temperature,
  electron_number_density,
  nlte.Sun.spectral_flux_density,
  nlte.Sun.wavelengths,
)


print(population_lte)
print(population_nlte_1)
print(population_nlte_2)

print(sum(population_lte))
print(sum(population_nlte_2))

print(nlte.Oxygen.keys)