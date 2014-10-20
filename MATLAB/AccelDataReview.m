
%% Data Set One
accelData1 = csvread('/Users/bryant/Documents/GitHub Repos/ArduinoBikeShirt/AccelData/AccelData.csv');
time = 0:0.01:(length(accelData1(:,1))-1)*0.01;
filtAccel = filter(Hd,accelData1(:,3));
plot(time',[accelData1(:,3) filtAccel])

%% Data Set 2
accelData2 = csvread('/Users/bryant/Documents/GitHub Repos/ArduinoBikeShirt/AccelData/AccelData2.csv');
time = 0:0.01:(length(accelData2(:,1))-1)*0.01;
filtAccel = filter(Hd,accelData2(:,3));
plot(time',[accelData2(:,3) filtAccel])