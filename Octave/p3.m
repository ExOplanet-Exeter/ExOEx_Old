clear all
load ~/Desktop/ExOEx/Arc/data/position.dat
x = position(:,1);
y = position(:,2);
z = position(:,3);
scatter3(x,y,z,'b');
axis([-1,1,-1,1,-1,1])
hold on
load ~/Desktop/ExOEx/Arc/data/deadPosition.dat
u = deadPosition(:,1);
v = deadPosition(:,2);
w = deadPosition(:,3);
scatter3(u,v,w,'r');
[a,b,c] = sphere(30);
mesh(a,b,c)
hold off
