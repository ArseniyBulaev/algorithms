#include "nearest neighbor.hpp"

using std::vector, std::set;

// Эвристика ближайшей точки
vector<Point> nearest_neighbor(set<Point> available_points){
    // Маршрут
    vector<Point> route;
    
    if(available_points.empty()) return route;

    // Генератор случайных чисел
    std::random_device dev;
    // Алгоритм для генерации
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, available_points.size() - 1);
    // Из множества P выбираем и посещаем произвольную точку p_0
    auto it = std::begin(available_points);
    std::advance(it, dist(rng));
    Point p = *it;
    // Удаляем выбранную точку из доступных (Посещаем её)
    available_points.extract(p);
    route.push_back(p);
    
    // Пока остаются непосещённые точки
    while(!available_points.empty()){
        const Point * nearest = nullptr;
        double distance_to_nearest;
        // Выбираем точку ближаюшую к p
        for (const Point & some_point : available_points){
            // Расстояние до некоторой точки
            double distance = Point::calculate_distance(p, some_point);
            if (nearest){
                if (distance < distance_to_nearest){
                    nearest = &some_point;
                    distance_to_nearest = distance;
                }
            }
            else{
                nearest = &some_point;
                distance_to_nearest = distance;
            }
        } 
        // Посещаем ближайшую точку
        p = *nearest;
        available_points.extract(p);
        route.push_back(p);
    }

    // Возвращаемся из точки в p_n-1 в точку p_0
    Point start_point = route.front();
    route.push_back(start_point);

    return route;
}