
function [ Res] = shubhamgupta(Band1,Band2,Band3,Band4,Band5)
%**************************************************************************
    if(strcmpi('black',Band4))
    Band4=1;
 elseif(strcmpi('brown',Band4))
    Band4=10;
     elseif(strcmpi('red',Band4))
    Band4=100;
     elseif(strcmpi('orange',Band4))
    Band4=1000;
     elseif(strcmpi('yellow',Band4))
    Band4=10000;
     elseif(strcmpi('green',Band4))
    Band4=100000;
     elseif(strcmpi('blue',Band4))
    Band4=1000000;
     elseif(strcmpi('violet',Band4))
    Band4=10000000;
     elseif(strcmpi('gold',Band4))
    Band4=0.1;
     elseif(strcmpi('silver',Band4))
    Band4=0.01;
     end

     if(strcmpi('black',Band3))
    Band3=0;
 elseif(strcmpi('brown',Band3))
    Band3=1;
     elseif(strcmpi('red',Band3))
    Band3=2;
     elseif(strcmpi('orange',Band3))
    Band3=3;
     elseif(strcmpi('yellow',Band3))
    Band3=4;
     elseif(strcmpi('green',Band3))
    Band3=5;
     elseif(strcmpi('blue',Band3))
    Band3=6;
     elseif(strcmpi('violet',Band3))
    Band3=7;
     elseif(strcmpi('grey',Band3))
    Band3=8;
     elseif(strcmpi('white',Band3))
    Band3=9;
    end





 %*************************************************************************
    if(strcmpi('black',Band1))
    Band1=0;
 elseif(strcmpi('brown',Band1))
    Band1=1;
     elseif(strcmpi('red',Band1))
    Band1=2;
     elseif(strcmpi('orange',Band1))
    Band1=3;
     elseif(strcmpi('yellow',Band1))
    Band1=4;
     elseif(strcmpi('green',Band1))
    Band1=5;
     elseif(strcmpi('blue',Band1))
    Band1=6;
     elseif(strcmpi('violet',Band1))
    Band1=7;
     elseif(strcmpi('grey',Band1))
    Band1=8;
     elseif(strcmpi('white',Band1))
    Band1=9;
    end
    %**********************************************************************
    if(strcmpi('black',Band2))
    Band2=0;
 elseif(strcmpi('brown',Band2))
    Band2=1;
     elseif(strcmpi('red',Band2))
    Band2=2;
     elseif(strcmpi('orange',Band2))
    Band2=3;
     elseif(strcmpi('yellow',Band2))
    Band2=4;
     elseif(strcmpi('green',Band2))
    Band2=5;
     elseif(strcmpi('blue',Band2))
    Band2=6;
     elseif(strcmpi('violet',Band2))
    Band2=7;
     elseif(strcmpi('grey',Band2))
    Band2=8;
     elseif(strcmpi('white',Band2))
    Band2=9;
     end
%**************************************************************************
    if(strcmpi('brown',Band5))
    Band5=1;
 elseif(strcmpi('red',Band5))
    Band5=2;
     elseif(strcmpi('green',Band5))
    Band5=0.5;
     elseif(strcmpi('blue',Band5))
    Band5=0.25;
     elseif(strcmpi('violet',Band5))
    Band5=0.10;
     elseif(strcmpi('grey',Band5))
    Band5=0.05;
 elseif(strcmpi('gold',Band5))
    Band5=5;
 elseif(strcmpi('silver',Band5))
    Band5=10;
    end
R=( (Band1*100)+(Band2*10)+(Band3))*Band4;
Tolerance=Band5;
disp('the resistance and tollerence is')
Res=[R, (Tolerance*R)/100];
end
