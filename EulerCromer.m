function [sol,tmat] = EulerCromer(Y,h,F,tmax)
t0 = 0;
N = (tmax-t0)/h;
siz = size(Y);
tmat = zeros(1,N);
sol = zeros(siz(1),N);
for k = 1:N
    t = (k-1)*h;
    q = zeros(1,siz(1));
    q(1) = 1;
    Fn = q*F(t,Y);
    Y(1)=Y(1)+h*Fn;
    for l = 2:siz(1)
        q = zeros(1,siz(1));
        q(l) = 1;
        Fn = q*F(t,Y);
        Y(l) = Y(l)+ h*Fn;
    end
    sol(:,k) = Y;
    tmat(1,k) = t;
end
end