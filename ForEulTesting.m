g=9.80665;
l = 1;
F = @(t,X) [-2*X(1)-3*X(2) -X(1)-X(2) ]';  %X(1)=theta and X(2) = theta_dot or V
Yi = [1 1]';
h = 0.01;
tmax=10;
[sol,tmat] = ModEul(Yi,h,F,tmax);
plot(tmat,sol(1,:));
