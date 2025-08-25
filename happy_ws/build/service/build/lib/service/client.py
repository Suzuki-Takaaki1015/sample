import rclpy
from rclpy.node import Node
from service_msgs.srv import RandomService

class Math_Client(Node):
    def __init__(self):
        super().__init__('math_client')
        self.client = self.create_client(RandomService, 'random_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f"サービスは利用できません。待機中...")
        self.request = RandomService.Request()

    def send_request(self, order):
        self.request.command = order
        self.future = self.client.call_async(self.request)

def main():
    rclpy.init()
    client = Math_Client()
    order = input('求める値は？')
    client.send_request(order)
    
    while rclpy.ok():
        rclpy.spin_once(client)
        if client.future.done():
            try:
                response = client.future.result()
            except Exception as e:
                client.get_logger().info(f'サービスの呼び出しに失敗しました。{e}')
            else:
                client.get_logger().info(f'\nリクエスト：{client.request.command} -> レスポンス：{response.answer}')
                break
    client.destroy_node()
    rclpy.shutdown()