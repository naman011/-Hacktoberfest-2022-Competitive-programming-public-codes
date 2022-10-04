G=1; %6.67*10^-11;
m1 = input('Enter the mass of 1st object:');
m2 = input('Enter the mass of 2nd object:');
h = 0.05;
tmax=1000;
x1 = -5;
x2 = 5;
y1 = 0;
y2 = 0;
Vx1 = 0;
Vy1 = 0.4*(sqrt(G*m2/(sqrt((x1-x2)^2 + (y1-y2)^2))))*rand();
Vx2 = 0;
Vy2 = -0.4*(sqrt(G*m1/(sqrt((x1-x2)^2 + (y1-y2)^2))))*rand();
Yi = [Vx1;Vy1;x1;y1;x2;y2;Vx2;Vy2];
F = @(t,X) [-(G*m2*X(3))/((sqrt((X(3)-X(5))^2 + (X(4)-X(6))^2))^3);
    -(G*m2*X(4))/((sqrt((X(3)-X(5))^2 + (X(4)-X(6))^2))^3);
    X(1);X(2);(-m1/m2)*X(1);(-m1/m2)*X(2);
    G*m1*X(3)/((sqrt((X(3)-X(5))^2 + (X(4)-X(6))^2))^3);G*m1*X(4)]; 
[sol,tmat] = RK3(Yi,h,F,tmax);
plot(sol(3,:),sol(4,:))
hold on
plot(sol(5,:),sol(6,:))

