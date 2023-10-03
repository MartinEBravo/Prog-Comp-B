# Búsqueda Binaria
- Dado un arreglo ordenado, el algoritmo de búsqueda binaria busca un elemento o condición en el arreglo en tiempo $O(\log n)$.
- Su implementación en `C++`:
```c++
while(l<=h){
	m = l+(h-l)/2;
	if (m>h) h = m+1;
	else l = m-1;
}
```
- También si queremos encontrar un número en $\mathbb{R}$ podemos hacer:
```c++
double EPS = 1e-6; 
while(r-l > EPS){ 
	//... lo mismo de antes 
}
```