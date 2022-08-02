float find_root(float f(float), float a, float b, float tol){
    while (not (b - a < tol))
        if (f((a + b) / 2)>0)
            b = (a + b) / 2;
        else
            a = (a + b) / 2;
    return (a + b) / 2;
}
