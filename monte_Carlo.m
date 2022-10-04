function [I] = monte_Carlo(f,a,b,N)
rect_c = 0;
f_c = 0;
step_s = 0.01;
x = a:step_s:b;
rec_h = max(f(x));
x_m_f = zeros(N,1);
y_m_f = zeros(N,1);
x_m_r = zeros(N,1);
y_m_r = zeros(N,1);
%Rectangle will be defined by a to be and 0 to rec_h
for i=1:N
    x_c = a+(b-a)*rand();
    y_c = rec_h*rand();
    if (y_c<f(x_c))
        f_c=f_c+1;
        rect_c = rect_c+1;
        x_m_f(i) = x_c;
        y_m_f(i) = y_c;
    else
        rect_c = rect_c+1;
        x_m_r(i) = x_c;
        y_m_r(i) = y_c;
    end

end
I = (f_c/rect_c)*rec_h*(b-a);
scatter(x_m_f,y_m_f,'.','b');
hold on
scatter(x_m_r,y_m_r,'.','r');