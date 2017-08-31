resuts=`ps -ef|grep $1|awk '{print $2}'`

echo $resuts

#echo $resuts|awk '{print $1 $2}'


pid=$resuts|awk '{print $2}'

echo $pid

