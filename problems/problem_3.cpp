#include <string>

std::string problemSolution3(float height, char S)
std:: string result{
   switch (S) {
        case 'M':
            if (height < 1.70) {
                result = "Short\n";
            } else if (height>=1.70&&height < 1.85) {
                result = "Normal\n";
            } else if (height >= 1.85){
                result = "Tall\n";
            }
            break;
        case 'F':
            if (height<1.60) {
                result = "Short\n";
            }else if(height>1.60&&height <1.75) {
                  result = "Normal\n";
            }else if (height>=1.75){
                result = "Tall\n";
            }
            break;
    return result;
}
