#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

// Función que determina si es posible poner n routers entre m árboles con distancia mínima mid
// arr: distancias de cada arbol desde el principio del bosque
bool esPosible(vector<double> &arr, double maxDist, ll m, ll n) {
    int routers = 1;  // Comenzamos con un router colocado después del primer árbol
    double lastRouterPos = (double) arr[0] + maxDist;  // La posición del primer router


    for (int i = 1; i < m; i++) {
        if (arr[i] - lastRouterPos > maxDist) {
            routers++;
            lastRouterPos = arr[i] + maxDist;
        }
    }
    return routers <= n;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Lectura de datos
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<double> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        // Ordenar a
        sort(a.begin(), a.end());

        // Busqueda Binaria
        double low = 0;
        double high = 1e9;
        double result;

        const double EPSILON = 1e-9;
        while (high - low > EPSILON) {
            double mid = (low + high) / 2;
            if (esPosible(a, mid, m, n)) {
                result = mid;
                high = mid;
            } else {
                low = mid;
            }
        }

        // Redondear result a un decimal de precisión
        cout << fixed;
        cout.precision(1);
        cout << result << endl;
    }

    return 0;
}

