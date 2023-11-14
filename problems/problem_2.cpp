float problemSolution2(float i, float j, float k) {
    float result;
     result=(i > j && i > k)? "The maximum number is ":
      (j > i && j > k) ? "The maximum number is ":
         "The maximum number is ";
    return result;
}
