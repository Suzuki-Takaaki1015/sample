# sample

このリポジトリに存在するコード
・ランダムな数字（０〜５００）をパブリッシュし続けるトピック通信プログラム
・トピックを読み取り、それらの数字を保存して合計、平均、最大値、最小値を返すことができるサービス通信プログラム
・サービス通信プログラムに対して要求を行うサービス通信プログラム

```bash
git clone https://github.com/Suzuki-Takaaki1015/sample.git
cd sample/happy_ws
source install/setup.bash
ros2 run service server
ros2 run random_number random_topic
ros2 run service client

ros2 service call /random_service service_msgs/srv/RandomService '{command: "合計"}'