library(ggplot2)
data(diamonds)
histogram_density <- ggplot(diamonds, aes(x = price, fill = clarity, color = clarity))+
  geom_histogram(aes(y=..density..), binwidth = 500, alpha = 0.5, position = "identity")+
  geom_density(alpha=0.2, adjust=1.5)
  labs(
    title = "Distribution of diamond prices with density curves by clarity",
    x = "Price(USD)",
    y = "Density"
  )+
  theme_minimal()+
  scale_fill_brewer(palette = "Dark2")+
  scale_color_brewer(palette = "Dark2")
print(histogram_density)
