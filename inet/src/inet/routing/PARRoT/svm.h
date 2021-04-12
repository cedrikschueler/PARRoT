namespace svm{

const char* classes[3] = {"friis", "nakagami", "tworay"};
const float w0[8] = {10.6211, 28.5596, -23.71, 10.4353, 36.099, -25.3903, -13.6372, -21.8653};
const float w1[8] = {0.6052, 2.2941, 2.7053, -0.0507, 1.6247, 0.2466, 4.0765, -0.6732};
const float w2[8] = {0.4721, 1.984, 2.8422, -0.6694, 1.7212, 0.7181, 4.1639, -0.6895};

float svm(float *_values, const float *_weights, float _offset, unsigned int _size)
{
	float sum = 0.0;
	unsigned int i;
	for(i=0; i<_size; i++)
		sum += _values[i]*_weights[i];
	return sum + _offset;
}

unsigned int findMax(int *_values, unsigned int _size)
{
	int max = _values[0];
	unsigned int index = 0;
	unsigned int i;
	for(i=1; i<_size; i++)
	{
		if(_values[i]>max)
		{
			max = _values[i];
			index = i;
		}
	}
	return index;
}

const char* predict(float d_max,float d_min,float d_mean,float d_std,float rss_max,float rss_min,float rss_mean,float rss_std)
{
	float v[8] = {(d_max-106.394)/395.228, (d_min-13.0478)/405.7652, (d_mean-77.8227)/358.4043, (d_std-4.46694)/183.44006000000002, (rss_max+83.9408)/45.858999999999995, (rss_min+84.9862)/20.5728, (rss_mean+84.3911)/27.412699999999994, (rss_std-0.0549529)/17.7742471};

	int wins[3] = {0, 0, 0};
	svm(v, w0, -8.4901, 8)<0 ? wins[0]++ : wins[1]++;
	svm(v, w1, -3.9476, 8)<0 ? wins[0]++ : wins[2]++;
	svm(v, w2, -3.8599, 8)<0 ? wins[1]++ : wins[2]++;

	unsigned int index = findMax(wins, 3);

	return classes[index];
}

}
