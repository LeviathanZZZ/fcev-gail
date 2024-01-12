data1 = WLTP;  % 替换为实际的数据
data2 = UDDS;  % 替换为实际的数据

% 截断或补齐数组
min_length = min(length(data1), length(data2));
data1 = data1(1:min_length);
data2 = data2(1:min_length);

% 计算欧氏距离
% euclidean_distance = norm(data1 - data2);
manhattan_distance = sum(abs(data1 - data2));
disp(['欧氏距离为：', num2str(manhattan_distance)]);