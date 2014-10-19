

accelData = csvread('/Users/bryant/Documents/GitHub Repos/ArduinoBikeShirt/AccelData/AccelData.csv')
time = 0:0.01:(length(accelData(:,1))-1)*0.01;

plot(time',accelData)