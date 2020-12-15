#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double x){
    return x*M_PI/180.0;
}
double rad2deg(double y){
    return y*180.0/M_PI;
}
double findXComponent(double ll1,double ll2,double aa1,double aa2){
    return (cos(aa1)*ll1)+(cos(aa2)*ll2);
}
double findYComponent(double lll1,double lll2,double aaa1,double aaa2){
    return (sin(aaa1)*lll1)+(sin(aaa2)*lll2);
}
double pythagoras(double x1comp, double y1comp){
    return sqrt(pow(x1comp,2)+pow(y1comp,2));
}
void showResult(double ans1, double ans2){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << ans1;
    cout << "\nDirection of the resultant vector (deg) = "<< ans2;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
