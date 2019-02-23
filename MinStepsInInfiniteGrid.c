int coverPoints(int* X, int n1, int* Y, int n2) {
    int stepsx = 0, stepsy = 0, diffx = 0, diffy = 0, steps = 0;
    int i = 0;

    for(i = 0; i< (n1-1) ; i++)
    {
        diffx = X[i+1] - X[i];
        if(diffx < 0)
            diffx = diffx*(-1);

        diffy = Y[i+1] - Y[i];
        if(diffy < 0)
            diffy = diffy*(-1);

        if(diffx > diffy)
            steps += diffx;
        else
            steps += diffy;
    }

    return steps;
}
